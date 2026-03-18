/*
 * XREFs of ACPIGpeBuildEventMasks @ 0x1C0008D18
 * Callers:
 *     ACPITableLoad @ 0x1C0006510 (ACPITableLoad.c)
 *     ACPITableUnload @ 0x1C0040C70 (ACPITableUnload.c)
 * Callees:
 *     AMLIGetFirstChild @ 0x1C00070A8 (AMLIGetFirstChild.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C00075D4 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C0008074 (ACPIGpeInstallRemoveIndex.c)
 *     AMLIIterateSiblingsNext @ 0x1C0008E44 (AMLIIterateSiblingsNext.c)
 *     AMLIGetNameSpaceObject @ 0x1C000DA28 (AMLIGetNameSpaceObject.c)
 */

void ACPIGpeBuildEventMasks()
{
  KIRQL v0; // di
  _QWORD *i; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // r8d
  char v7; // cl
  unsigned __int8 v8; // cl
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int v12; // ebx
  unsigned int *v13; // r10
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  if ( (int)AMLIGetNameSpaceObject("\\_GPE") >= 0 )
  {
    for ( i = (_QWORD *)AMLIGetFirstChild(v14); ; i = (_QWORD *)AMLIIterateSiblingsNext(v2) )
    {
      v2 = i;
      if ( !i )
        break;
      v3 = *i;
      if ( *(_WORD *)(v3 + 58) == 8 && *(_BYTE *)(v3 + 32) == 95 )
      {
        v4 = *(_DWORD *)(v3 + 32);
        v5 = (HIWORD(v4) | v4 & 0xFF0000) >> 8;
        v6 = (HIWORD(v4) | v4 & 0xFF0000) >> 16;
        v7 = ((HIWORD(v4) | v4 & 0xFF0000) >> 16) - 48;
        if ( (unsigned __int8)(BYTE1(v5) - 48) > 9u )
        {
          if ( (unsigned __int8)(v6 - 65) > 5u )
            continue;
          v7 = v6 - 55;
        }
        v8 = 16 * v7;
        LOBYTE(v4) = HIBYTE(v4) - 48;
        if ( (unsigned __int8)(v5 - 48) > 9u )
        {
          if ( (unsigned __int8)(v5 - 65) > 5u )
            continue;
          LOBYTE(v4) = v5 - 55;
        }
        v9 = (unsigned __int8)v4 | (unsigned int)v8;
        LOBYTE(v14) = 1;
        if ( BYTE1(v4) == 76 )
        {
          v10 = 1LL;
LABEL_11:
          ACPIGpeInstallRemoveIndex(v9, v10, 1LL, &v14);
          continue;
        }
        if ( BYTE1(v4) == 69 )
        {
          v10 = 0LL;
          goto LABEL_11;
        }
      }
    }
  }
  v11 = (unsigned int)GpeVectorTableSize;
  v12 = 0;
  if ( GpeVectorTableSize )
  {
    do
    {
      v13 = (unsigned int *)*((_QWORD *)GpeVectorTable + 2 * v12 + 1);
      if ( v13 )
      {
        ACPIGpeInstallRemoveIndex(*v13, v13[7] == 0, 0LL, (_BYTE *)v13 + 25);
        v11 = (unsigned int)GpeVectorTableSize;
      }
      ++v12;
    }
    while ( v12 < (unsigned int)v11 );
  }
  ACPIGpeEnableDisableEvents(1, v11);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&GpeTableLock, v0);
}
