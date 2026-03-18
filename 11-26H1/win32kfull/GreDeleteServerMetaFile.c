/*
 * XREFs of GreDeleteServerMetaFile @ 0x140325B80
 * Callers:
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1401B22B4 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     FreeDdeXact @ 0x1402930F0 (FreeDdeXact.c)
 *     vCleanupMetaType @ 0x14030F360 (vCleanupMetaType.c)
 * Callees:
 *     ??0?$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x140325AF4 (--0-$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x140325B40 (--1-$HmgLockResult@VMETA@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDeleteServerMetaFile(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  unsigned int v5; // ebx
  int v6; // eax
  _QWORD v8[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = Gre::Base::Globals(a1);
  LOBYTE(v3) = 21;
  v4 = HmgLock(v2, a1, v3, 0LL);
  HmgLockResult<META>::HmgLockResult<META>((__int64)v8, v4);
  v5 = 0;
  if ( v8[0] )
  {
    v6 = *(_DWORD *)(v8[0] + 24LL);
    if ( v6 == 1599096397 || v6 == 1480934989 )
    {
      HmgFree(*(_QWORD *)v8[0]);
      v8[0] = 0LL;
      v5 = 1;
    }
  }
  HmgLockResult<META>::~HmgLockResult<META>((__int64)v8);
  return v5;
}
