/*
 * XREFs of s_pbmCastingAppStateChanged @ 0x18007A510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmCastingAppStateChanged(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  int (__fastcall **v5)(struct IAudioPolicyManager *, GUID *, __int64 *); // rax
  __int64 v6; // r8
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  if ( (unsigned int)IsPbmCastingAppStateChangedSupported() )
  {
    return (unsigned int)PbmCastingAppStateChanged(a1, a2);
  }
  else if ( g_PolicyManager )
  {
    v5 = *(int (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64 *))g_PolicyManager;
    v9 = 0LL;
    if ( (*v5)(g_PolicyManager, &GUID_77a2d7aa_0c11_4452_9db1_101704d3b2fc, &v9) >= 0 )
    {
      v8 = 0LL;
      v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager
                                                                                       + 32LL))(
             g_PolicyManager,
             a1,
             &v8);
      if ( v4 >= 0 )
      {
        LOBYTE(v6) = a2 == 0;
        v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v8, v6);
      }
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v4;
}
