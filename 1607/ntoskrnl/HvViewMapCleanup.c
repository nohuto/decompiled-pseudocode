/*
 * XREFs of HvViewMapCleanup @ 0x1404D0F70
 * Callers:
 *     HvLoadHive @ 0x14047DA4C (HvLoadHive.c)
 *     HvFreeHive @ 0x1404F76B4 (HvFreeHive.c)
 *     CmShutdownSystem @ 0x1405FC700 (CmShutdownSystem.c)
 * Callees:
 *     MmReleaseResourceCharge @ 0x140003E4C (MmReleaseResourceCharge.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     CcClearPrivateWriteFile @ 0x1401B1EBC (CcClearPrivateWriteFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x14061053C (HvpViewUnmapViewOfPrimaryFile.c)
 */

void __fastcall HvViewMapCleanup(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r15d
  __int64 v5; // r12
  unsigned int v7; // esi
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbp
  unsigned int v11; // r12d
  _QWORD *v12; // r13
  int v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h]
  char v15; // [rsp+70h] [rbp+18h]

  v15 = a3;
  v14 = a2;
  LODWORD(v3) = 0;
  v4 = 0;
  v5 = a2;
  if ( *(_QWORD *)(a1 + 24) )
  {
    v7 = 0;
    v8 = 0LL;
    do
    {
      v9 = *(_QWORD *)(a1 + 24);
      v10 = *(_QWORD *)(v8 + v9);
      if ( !v10 )
        break;
      v11 = 0;
      v12 = *(_QWORD **)(v8 + v9);
      do
      {
        if ( !*v12 )
          break;
        v3 = v3 & 0x8003FFFF | ((v11 & 0x3F | ((v7 & 0x7F) << 6)) << 18);
        HvpViewUnmapViewOfPrimaryFile((v11 & 0x3F | ((v7 & 0x7F) << 6)) << 18, *(_QWORD *)(a1 + 24), v3, &v13);
        v4 += v13;
        ++v11;
        v12 += 4;
      }
      while ( v11 < 0x40 );
      v5 = v14;
      (*(void (__fastcall **)(__int64, __int64))(v14 + 32))(v10, 2048LL);
      ++v7;
      v8 += 8LL;
    }
    while ( v7 < 0x80 );
    (*(void (__fastcall **)(_QWORD, __int64))(v5 + 32))(*(_QWORD *)(a1 + 24), 1024LL);
    *(_QWORD *)(a1 + 24) = 0LL;
    if ( v15 )
    {
      CcClearPrivateWriteFile(*(struct _FILE_OBJECT **)(a1 + 16));
      MmReleaseResourceCharge(v4, 3, 1u);
      *(_DWORD *)(a1 + 32) -= v4;
    }
    ObfDereferenceObject(*(PVOID *)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
