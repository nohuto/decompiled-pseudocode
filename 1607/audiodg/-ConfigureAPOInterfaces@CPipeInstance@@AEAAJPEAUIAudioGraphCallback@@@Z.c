/*
 * XREFs of ?ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z @ 0x140007CF0
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009490 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?InitializeAPOs@CSystemAudioDeviceBase@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x140003430 (-InitializeAPOs@CSystemAudioDeviceBase@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ??_V@YAXPEAX@Z @ 0x140017F40 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x140017F8C (--_U@YAPEAX_K@Z.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPipeInstance::ConfigureAPOInterfaces(CPipeInstance *this, struct IAudioGraphCallback *a2)
{
  __int64 v2; // rdi
  struct IAudioProcessingObject **v3; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  struct IAudioProcessingObject **v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct IAudioProcessingObject **v13; // rcx
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(CSystemAudioDeviceBase *, unsigned __int64, __int64, struct IAudioProcessingObject **); // rax
  unsigned int v16; // eax
  unsigned int v17; // esi
  struct IAudioProcessingObject **v18; // rbx

  v2 = 0LL;
  v3 = 0LL;
  if ( a2 )
  {
    v6 = *((_QWORD *)this + 3);
    if ( v6 )
    {
      do
      {
        v7 = *(_QWORD *)(v6 + 16);
        v6 = *(_QWORD *)(v6 + 8);
        if ( *(_DWORD *)(v7 + 40) == 2 && !**(_DWORD **)(v7 + 32) )
          v2 = (unsigned int)(v2 + 1);
      }
      while ( v6 );
      if ( (_DWORD)v2 )
      {
        v8 = (struct IAudioProcessingObject **)operator new[](saturated_mul((unsigned int)v2, 8uLL));
        v3 = v8;
        if ( !v8 )
        {
          v17 = -2147024882;
LABEL_33:
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 65LL, &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids, v17);
          }
          AudDGTraceLoggingErrorHelper("CPipeInstance::ConfigureAPOInterfaces", 0xF2Du, v17);
          return v17;
        }
        memset_0(v8, 0, 8 * v2);
        v9 = *((_QWORD *)this + 3);
        v10 = 0LL;
        while ( v9 )
        {
          v11 = *(_QWORD *)(v9 + 16);
          v9 = *(_QWORD *)(v9 + 8);
          if ( *(_DWORD *)(v11 + 40) == 2 )
          {
            v12 = *(_QWORD *)(v11 + 32);
            if ( !*(_DWORD *)v12 && (unsigned int)v10 < (unsigned int)v2 )
            {
              v13 = &v3[v10];
              if ( !v13 )
              {
                v17 = -2147467261;
                goto LABEL_21;
              }
              *v13 = *(struct IAudioProcessingObject **)(v12 + 40);
              v14 = *(_QWORD *)(v12 + 40);
              if ( v14 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
              v10 = (unsigned int)(v10 + 1);
            }
          }
        }
      }
    }
    v15 = *(__int64 (__fastcall **)(CSystemAudioDeviceBase *, unsigned __int64, __int64, struct IAudioProcessingObject **))(*(_QWORD *)a2 + 24LL);
    if ( v15 == CSystemAudioDeviceBase::InitializeAPOs )
      v16 = CSystemAudioDeviceBase::InitializeAPOs(a2, (unsigned __int64)this, (unsigned int)v2, v3);
    else
      v16 = v15(a2, (unsigned __int64)this, (unsigned int)v2, v3);
    v17 = v16;
LABEL_21:
    if ( v3 )
    {
      if ( (_DWORD)v2 )
      {
        v18 = v3;
        do
        {
          if ( *v18 )
          {
            ((void (__fastcall *)(struct IAudioProcessingObject *))(*v18)->lpVtbl->Release)(*v18);
            *v18 = 0LL;
          }
          ++v18;
          --v2;
        }
        while ( v2 );
      }
      operator delete[](v3);
    }
    if ( (v17 & 0x80000000) == 0 )
      return v17;
    goto LABEL_33;
  }
  return 0LL;
}
