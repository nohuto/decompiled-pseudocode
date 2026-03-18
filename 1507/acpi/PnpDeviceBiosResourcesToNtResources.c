/*
 * XREFs of PnpDeviceBiosResourcesToNtResources @ 0x1C000684C
 * Callers:
 *     PnpBiosGetDeviceResourceList @ 0x1C0067894 (PnpBiosGetDeviceResourceList.c)
 * Callees:
 *     PnpBiosResourcesToNtResources @ 0x1C0067DC4 (PnpBiosResourcesToNtResources.c)
 */

__int64 __fastcall PnpDeviceBiosResourcesToNtResources(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 result; // rax
  unsigned int v7; // edi
  char v8; // bp
  KIRQL v9; // al
  unsigned int v10; // edx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  char v14; // dl

  v4 = a1;
  result = PnpBiosResourcesToNtResources(a1[89]);
  v7 = result;
  if ( (int)result >= 0 && *(_QWORD *)a4 )
  {
    v8 = 0;
    v9 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    while ( (*v4 & 0x2000000000LL) == 0 )
    {
      v4 = (_QWORD *)v4[92];
      if ( !v4 )
        goto LABEL_6;
    }
    v8 = 1;
LABEL_6:
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
    if ( v8 )
    {
      v10 = *(_DWORD *)(*(_QWORD *)a4 + 28LL);
      v11 = *(_QWORD *)a4 + 32LL;
      if ( v10 )
      {
        v12 = v10;
        do
        {
          v13 = v11 + 8;
          v11 += 8 + 32LL * *(unsigned int *)(v11 + 4);
          while ( v13 < v11 )
          {
            v14 = *(_BYTE *)(v13 + 1);
            if ( (v14 == 1 || v14 == 3 || (unsigned __int8)(v14 - 6) <= 1u) && *(_BYTE *)(v13 + 2) == 3 )
              *(_BYTE *)(v13 + 2) = 1;
            v13 += 32LL;
          }
          --v12;
        }
        while ( v12 );
      }
    }
    return v7;
  }
  return result;
}
