/*
 * XREFs of s_apmSetVolumeGroupGainForId @ 0x18007A3C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ConvertDbToEngineVolume @ 0x18007A154 (ConvertDbToEngineVolume.c)
 */

__int64 __fastcall s_apmSetVolumeGroupGainForId(__int64 a1, __int64 a2, float a3)
{
  int v4; // ebx
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v9; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v8);
  if ( v4 >= 0 )
  {
    v9 = 0LL;
    if ( (**(int (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64 **))g_PolicyManager)(
           g_PolicyManager,
           &GUID_77a2d7aa_0c11_4452_9db1_101704d3b2fc,
           &v9) >= 0 )
    {
      v5 = v9;
      v6 = *v9;
      ConvertDbToEngineVolume(a3);
      v4 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v6 + 40))(v5, a2);
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64 *))(*v9 + 16))(v9);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v4;
}
