/*
 * XREFs of ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1400064F0
 * Callers:
 *     ?GetDevicePipeFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1400052B0 (-GetDevicePipeFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000C0D0 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     memcpy_0 @ 0x140019602 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetDevicePipeFormat(CAudioDeviceGraph *this, struct tWAVEFORMATEX **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v5; // rcx
  CProcessNode *v6; // rcx
  __int64 (__fastcall *v7)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int LeftFormat; // eax
  int v9; // ebx
  unsigned __int16 *v10; // rbp
  __int64 v11; // rbx
  struct tWAVEFORMATEX *v12; // rax
  struct tWAVEFORMATEX *v13; // rdi
  struct IAudioMediaType *v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  if ( *((_DWORD *)this + 52) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 14) + 16LL);
    if ( !v5 )
      ATL::AtlThrowImpl(-2147467259);
    v6 = *(CProcessNode **)(v5 + 16);
    if ( v6 )
    {
      v7 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v6 + 8LL);
      if ( v7 == CProcessNode::GetLeftFormat )
        LeftFormat = CProcessNode::GetLeftFormat(v6, &v15);
      else
        LeftFormat = v7(v6, &v15);
      v9 = LeftFormat;
      if ( LeftFormat >= 0 )
      {
        v10 = (unsigned __int16 *)((__int64 (__fastcall *)(struct IAudioMediaType *))v15->lpVtbl->GetAudioFormat)(v15);
        v11 = v10[8];
        v12 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v11 + 18);
        v13 = v12;
        if ( v12 )
        {
          memcpy_0(v12, v10, v11 + 18);
          v9 = 0;
        }
        else
        {
          v9 = -2147024882;
        }
        *a2 = v13;
      }
    }
    else
    {
      v9 = -2005139430;
    }
  }
  else
  {
    v9 = -2005139437;
  }
  LeaveCriticalSection(v2);
  if ( v9 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        54LL,
        &WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids,
        (unsigned int)v9);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetDevicePipeFormat", 0x4A0u, v9);
  }
  if ( v15 )
    ((void (__fastcall *)(struct IAudioMediaType *))v15->lpVtbl->Release)(v15);
  return (unsigned int)v9;
}
