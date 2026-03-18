/*
 * XREFs of NtGdiGetServerMetaFileBits @ 0x140325D90
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x140325AF4 (--0-$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x140325B40 (--1-$HmgLockResult@VMETA@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetServerMetaFileBits(
        Gre::Base *a1,
        unsigned int a2,
        void *a3,
        void *a4,
        void *a5,
        void *a6,
        void *a7)
{
  unsigned __int64 v9; // rsi
  unsigned int v11; // edi
  struct Gre::Base::SESSION_GLOBALS *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // eax
  _QWORD v17[6]; // [rsp+30h] [rbp-48h] BYREF

  v9 = a2;
  v11 = 0;
  v12 = Gre::Base::Globals(a1);
  LOBYTE(v13) = 21;
  v14 = HmgLock(v12, a1, v13, 0LL);
  HmgLockResult<META>::HmgLockResult<META>((__int64)v17, v14);
  if ( v17[0] )
  {
    v15 = *(_DWORD *)(v17[0] + 24LL);
    if ( v15 == 1599096397 || v15 == 1480934989 )
    {
      v11 = *(_DWORD *)(v17[0] + 40LL);
      if ( (_DWORD)v9 )
      {
        if ( (_DWORD)v9 == v11 )
        {
          GreProbeAndWriteToUntrustedVa(a6, 4uLL, (const void *)(v17[0] + 32LL), 4uLL, 1uLL);
          GreProbeAndWriteToUntrustedVa(a7, 4uLL, (const void *)(v17[0] + 36LL), 4uLL, 1uLL);
          GreProbeAndWriteToUntrustedVa(a4, 4uLL, (const void *)(v17[0] + 24LL), 4uLL, 1uLL);
          GreProbeAndWriteToUntrustedVa(a5, 4uLL, (const void *)(v17[0] + 28LL), 4uLL, 1uLL);
          GreProbeAndWriteToUntrustedVa(a3, v9, (const void *)(v17[0] + 44LL), *(unsigned int *)(v17[0] + 40LL), 1uLL);
        }
        else
        {
          v11 = 0;
        }
      }
    }
  }
  HmgLockResult<META>::~HmgLockResult<META>((__int64)v17);
  return v11;
}
