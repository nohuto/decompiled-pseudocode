/*
 * XREFs of NtGdiGetServerMetaFileBits @ 0x1C02B2DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0019EF0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ??0?$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C02B2BF4 (--0-$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x1C02B2C40 (--1-$HmgLockResult@VMETA@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetServerMetaFileBits(
        __int64 a1,
        __int64 a2,
        volatile void *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  SIZE_T v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ecx
  _DWORD *v16; // rcx
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  _QWORD v20[6]; // [rsp+40h] [rbp-38h] BYREF

  v9 = (unsigned int)a2;
  v10 = 0;
  LOBYTE(a2) = 21;
  v11 = HmgLock(a1, a2);
  HmgLockResult<META>::HmgLockResult<META>(v20, v11);
  if ( RFONTOBJ::bValid((RFONTOBJ *)v20) )
  {
    v15 = *(_DWORD *)(v20[0] + 24LL);
    if ( v15 == 1599096397 || v15 == 1480934989 )
    {
      v10 = *(_DWORD *)(v20[0] + 40LL);
      if ( (_DWORD)v9 )
      {
        if ( (_DWORD)v9 == v10 )
        {
          v16 = a6;
          if ( (unsigned __int64)a6 >= W32UserProbeAddress )
            v16 = (_DWORD *)W32UserProbeAddress;
          *v16 = *(_DWORD *)(v20[0] + 32LL);
          v17 = a7;
          if ( (unsigned __int64)a7 >= W32UserProbeAddress )
            v17 = (_DWORD *)W32UserProbeAddress;
          *v17 = *(_DWORD *)(v20[0] + 36LL);
          if ( (unsigned __int64)a4 >= W32UserProbeAddress )
            a4 = (_DWORD *)W32UserProbeAddress;
          *a4 = *(_DWORD *)(v20[0] + 24LL);
          v18 = a5;
          if ( (unsigned __int64)a5 >= W32UserProbeAddress )
            v18 = (_DWORD *)W32UserProbeAddress;
          *v18 = *(_DWORD *)(v20[0] + 28LL);
          ProbeForWrite(a3, v9, 4u);
          memmove((void *)a3, (const void *)(v20[0] + 44LL), *(unsigned int *)(v20[0] + 40LL));
        }
        else
        {
          v10 = 0;
        }
      }
    }
  }
  HmgLockResult<META>::~HmgLockResult<META>((__int64)v20, v12, v13, v14);
  return v10;
}
