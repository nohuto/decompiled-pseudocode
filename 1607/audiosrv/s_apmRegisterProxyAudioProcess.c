/*
 * XREFs of s_apmRegisterProxyAudioProcess @ 0x18007A1F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_apmRegisterProxyAudioProcess(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned int)IsApmRegisterProxyAudioProcessSupported() )
  {
    if ( g_PolicyManager )
    {
      v3 = *(_QWORD *)g_PolicyManager;
      v7 = 0LL;
      v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v3 + 32))(
             g_PolicyManager,
             a1,
             &v7);
      v5 = v7;
      v2 = v4;
      if ( v4 >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 224LL))(v7);
        v5 = v7;
        if ( v7 )
LABEL_7:
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v5);
      }
      else if ( v7 )
      {
        goto LABEL_7;
      }
    }
    return v2;
  }
  return 2147500033LL;
}
