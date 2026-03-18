/*
 * XREFs of NtGdiGetServerMetaFileBits @ 0x1C02B4F70
 * Callers:
 *     <none>
 * Callees:
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0022AB0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ??0?$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C02B4D60 (--0-$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x1C02B4DAC (--1-$HmgLockResult@VMETA@@@@QEAA@XZ.c)
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
  int v12; // ecx
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  _QWORD v17[6]; // [rsp+40h] [rbp-38h] BYREF

  v9 = (unsigned int)a2;
  v10 = 0;
  LOBYTE(a2) = 21;
  v11 = HmgLock(a1, a2);
  HmgLockResult<META>::HmgLockResult<META>(v17, v11);
  if ( RFONTOBJ::bValid((RFONTOBJ *)v17) )
  {
    v12 = *(_DWORD *)(v17[0] + 24LL);
    if ( v12 == 1599096397 || v12 == 1480934989 )
    {
      v10 = *(_DWORD *)(v17[0] + 40LL);
      if ( (_DWORD)v9 )
      {
        if ( (_DWORD)v9 == v10 )
        {
          v13 = a6;
          if ( (unsigned __int64)a6 >= W32UserProbeAddress )
            v13 = (_DWORD *)W32UserProbeAddress;
          *v13 = *(_DWORD *)(v17[0] + 32LL);
          v14 = a7;
          if ( (unsigned __int64)a7 >= W32UserProbeAddress )
            v14 = (_DWORD *)W32UserProbeAddress;
          *v14 = *(_DWORD *)(v17[0] + 36LL);
          if ( (unsigned __int64)a4 >= W32UserProbeAddress )
            a4 = (_DWORD *)W32UserProbeAddress;
          *a4 = *(_DWORD *)(v17[0] + 24LL);
          v15 = a5;
          if ( (unsigned __int64)a5 >= W32UserProbeAddress )
            v15 = (_DWORD *)W32UserProbeAddress;
          *v15 = *(_DWORD *)(v17[0] + 28LL);
          ProbeForWrite(a3, v9, 4u);
          memmove((void *)a3, (const void *)(v17[0] + 44LL), *(unsigned int *)(v17[0] + 40LL));
        }
        else
        {
          v10 = 0;
        }
      }
    }
  }
  HmgLockResult<META>::~HmgLockResult<META>((__int64)v17);
  return v10;
}
