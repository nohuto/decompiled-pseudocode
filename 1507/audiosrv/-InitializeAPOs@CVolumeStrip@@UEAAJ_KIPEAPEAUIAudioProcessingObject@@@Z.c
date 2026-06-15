/*
 * XREFs of ?InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18001D020
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800302C0 (-InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

__int64 __fastcall CVolumeStrip::InitializeAPOs(
        CMeterSoftware **this,
        unsigned __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  int v8; // ebx
  __int64 v9; // rcx
  CMeterSoftware *v10; // rdi
  int v11; // eax
  CMeterSoftware *v12; // rdi
  __int64 (__fastcall *v13)(CMeterSoftware *__hidden, unsigned __int64, unsigned int, struct IAudioProcessingObject **); // rbx
  int v14; // eax
  CMeterSoftware *v15; // rdi
  int v16; // eax

  v8 = -2147023537;
  if ( a4 || !a3 )
  {
    v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        32LL,
        &WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
        this);
      v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    v10 = this[30];
    if ( v10 )
    {
      v11 = (*(__int64 (__fastcall **)(CMeterSoftware *, unsigned __int64, _QWORD, struct IAudioProcessingObject **))(*(_QWORD *)v10 + 64LL))(
              this[30],
              a2,
              a3,
              a4);
      v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      v8 = v11;
    }
    v12 = this[32];
    if ( v12 && v8 >= 0 )
    {
      v13 = *(__int64 (__fastcall **)(CMeterSoftware *__hidden, unsigned __int64, unsigned int, struct IAudioProcessingObject **))(*(_QWORD *)v12 + 64LL);
      if ( v13 == CMeterSoftware::InitializeAPOs )
        v14 = CMeterSoftware::InitializeAPOs(this[32], a2, a3, a4);
      else
        v14 = v13(this[32], a2, a3, a4);
      v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      v8 = v14;
    }
    v15 = this[31];
    if ( v15 )
    {
      if ( v8 < 0 )
        goto LABEL_21;
      v16 = (*(__int64 (__fastcall **)(CMeterSoftware *, unsigned __int64, _QWORD, struct IAudioProcessingObject **))(*(_QWORD *)v15 + 88LL))(
              this[31],
              a2,
              a3,
              a4);
      v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      v8 = v16;
    }
    if ( v8 >= 0 )
      return (unsigned int)v8;
LABEL_21:
    if ( (struct _GUID *)v9 != &WPP_GLOBAL_Control && (*(_DWORD *)(v9 + 28) & 0x10000) != 0 && *(_BYTE *)(v9 + 25) >= 2u )
      WPP_SF_D(*(_QWORD *)(v9 + 16), 33LL, &WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids, (unsigned int)v8);
    return (unsigned int)v8;
  }
  return 2147500035LL;
}
