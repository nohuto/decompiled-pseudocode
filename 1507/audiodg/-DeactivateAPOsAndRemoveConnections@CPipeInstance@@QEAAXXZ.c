/*
 * XREFs of ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x140005C20
 * Callers:
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x140005860 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F230 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140013DA0 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x140027518 (WPP_SF_q.c)
 *     ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x140033378 (-RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CPipeInstance::DeactivateAPOsAndRemoveConnections(struct IAudioProcessor **this)
{
  struct IAudioProcessor *v2; // rdi
  __int64 v3; // rbx
  void *v4; // rbx
  struct IAudioProcessor *v5; // r14
  __int64 v6; // rbp
  struct IAudioProcessor *v7; // r12
  unsigned __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rax
  int v11; // ecx
  void *v12; // rbx
  void *v13; // rsi
  __int64 v14; // rax
  int v15; // ecx
  void *v16; // rbx
  void *v17; // rsi
  __int64 (__fastcall *v18)(void *); // rdi
  void *v19; // [rsp+70h] [rbp+8h] BYREF
  void *v20; // [rsp+78h] [rbp+10h]
  unsigned __int64 v21; // [rsp+80h] [rbp+18h] BYREF

  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      53LL,
      &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
      this,
      -2LL);
  }
  if ( *((_DWORD *)this + 29)
    && (*(int (__fastcall **)(struct IAudioProcessor *, unsigned __int64 *))(*(_QWORD *)this[18] + 32LL))(
         this[18],
         &v21) >= 0 )
  {
    v2 = this[3];
    while ( v2 )
    {
      v3 = *((_QWORD *)v2 + 2);
      v2 = (struct IAudioProcessor *)*((_QWORD *)v2 + 1);
      if ( *(_DWORD *)(v3 + 40) == 2 )
      {
        v4 = *(void **)(*(_QWORD *)(v3 + 32) + 40LL);
        v19 = v4;
        if ( v4 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 8LL))(v4);
        (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, void *))(*(_QWORD *)this[18] + 64LL))(
          this[18],
          v21,
          v4);
        if ( v4 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
      }
    }
    v5 = this[8];
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = *((_QWORD *)v5 + 2);
        v5 = *(struct IAudioProcessor **)v5;
        v7 = this[18];
        v8 = v21;
        *(_DWORD *)(v6 + 4) = 0;
        v9 = *(_DWORD *)(v6 + 16);
        if ( v9 )
        {
          if ( v9 == 1 )
            CConnectionInstance::RemoveCaptureConnection((CConnectionInstance *)v6, v7, v8);
          goto LABEL_32;
        }
        v20 = 0LL;
        v19 = 0LL;
        v10 = *(_QWORD *)(v6 + 32);
        if ( !v10 )
          goto LABEL_23;
        v11 = *(_DWORD *)(v10 + 40);
        if ( v11 == 2 )
          break;
        if ( v11 == 1 || v11 == 3 )
        {
          if ( (****(int (__fastcall *****)(_QWORD, GUID *, void **))(v10 + 32))(
                 **(_QWORD **)(v10 + 32),
                 &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                 &v19) < 0 )
            goto LABEL_30;
          (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, void *))(*(_QWORD *)v7 + 136LL))(
            v7,
            v8,
            v19);
          v13 = v19;
          if ( v19 )
          {
            v19 = 0LL;
LABEL_22:
            (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
          }
        }
LABEL_23:
        v14 = *(_QWORD *)(v6 + 24);
        if ( !v14 )
          goto LABEL_30;
        v15 = *(_DWORD *)(v14 + 40);
        if ( v15 == 2 )
        {
          v16 = *(void **)(*(_QWORD *)(v14 + 32) + 40LL);
          v20 = v16;
          if ( v16 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 8LL))(v16);
          (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, void *, _QWORD))(*(_QWORD *)v7 + 104LL))(
            v7,
            v8,
            v16,
            *(_QWORD *)(v6 + 8));
          v17 = v16;
          if ( !v16 )
            goto LABEL_30;
          v20 = 0LL;
          v18 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL);
LABEL_29:
          v18(v17);
          goto LABEL_30;
        }
        if ( v15 != 3 && v15 != 1 )
          goto LABEL_30;
        if ( (****(int (__fastcall *****)(_QWORD, GUID *, void **))(v14 + 32))(
               **(_QWORD **)(v14 + 32),
               &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
               &v19) < 0 )
          goto LABEL_30;
        (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, void *))(*(_QWORD *)v7 + 136LL))(
          v7,
          v8,
          v19);
        v17 = v19;
        if ( !v19 )
          goto LABEL_30;
        v19 = 0LL;
        v18 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL);
        if ( v18 != ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
          goto LABEL_29;
        ATL::CComObject<CCrossProcessServerInputEndpoint>::Release(v17);
LABEL_30:
        if ( v19 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
LABEL_32:
        if ( !v5 )
          goto LABEL_33;
      }
      v12 = *(void **)(*(_QWORD *)(v10 + 32) + 40LL);
      v20 = v12;
      if ( v12 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 8LL))(v12);
      (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, void *, _QWORD))(*(_QWORD *)v7 + 80LL))(
        v7,
        v8,
        v12,
        *(_QWORD *)(v6 + 8));
      v13 = v12;
      if ( !v12 )
        goto LABEL_23;
      v20 = 0LL;
      goto LABEL_22;
    }
LABEL_33:
    if ( (*(int (__fastcall **)(struct IAudioProcessor *, unsigned __int64))(*(_QWORD *)this[18] + 40LL))(this[18], v21) >= 0 )
      *((_DWORD *)this + 29) = 0;
  }
}
