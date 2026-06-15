/*
 * XREFs of ?CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z @ 0x14000C4E0
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140009600 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000BA70 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000BBB0 (-GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CConnectionInstance::CreateConnectionBuffer(
        CConnectionInstance *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  int v3; // eax
  CProcessNode *v5; // rcx
  __int64 (__fastcall *v8)(CProcessNode *, struct IAudioMediaType **); // rax
  int RightFormat; // eax
  int v10; // ebx
  bool v11; // sf
  void (*Release)(void); // rax
  __int64 v14; // rcx
  _BYTE v15[8]; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-28h]
  int v17; // [rsp+30h] [rbp-20h]
  struct IAudioMediaType *v18; // [rsp+38h] [rbp-18h] BYREF
  int v19; // [rsp+40h] [rbp-10h]
  unsigned __int64 v20; // [rsp+70h] [rbp+20h] BYREF

  v3 = *((_DWORD *)this + 10);
  v5 = (CProcessNode *)*((_QWORD *)this + 3);
  v18 = 0LL;
  v16 = 0LL;
  v17 = v3;
  v19 = 1094927443;
  if ( v5 )
  {
    v8 = *(__int64 (__fastcall **)(CProcessNode *, struct IAudioMediaType **))(*(_QWORD *)v5 + 16LL);
    if ( v8 == CProcessNode::GetRightFormat )
      RightFormat = CProcessNode::GetRightFormat(v5, &v18);
    else
      RightFormat = v8(v5, &v18);
    v10 = RightFormat;
    v11 = RightFormat < 0;
LABEL_5:
    if ( v11 )
      goto LABEL_8;
    goto LABEL_6;
  }
  v14 = *((_QWORD *)this + 4);
  if ( v14 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType **))(*(_QWORD *)v14 + 8LL))(v14, &v18);
    v11 = v10 < 0;
    goto LABEL_5;
  }
LABEL_6:
  v10 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, unsigned __int64 *))(**((_QWORD **)this + 6) + 40LL))(
          *((_QWORD *)this + 6),
          v15,
          &v20);
  if ( v10 >= 0 )
  {
    *a2 = v20;
    *a3 = v16;
  }
LABEL_8:
  if ( v18 )
  {
    Release = (void (*)(void))v18->lpVtbl->Release;
    if ( (char *)Release == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v18);
    else
      Release();
    v18 = 0LL;
  }
  if ( v10 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        11LL,
        &WPP_1ca138749e453a9e5342dd7aa161b4a4_Traceguids,
        (unsigned int)v10);
    }
    AudDGTraceLoggingErrorHelper("CConnectionInstance::CreateConnectionBuffer", 0xB3u, v10);
  }
  return (unsigned int)v10;
}
