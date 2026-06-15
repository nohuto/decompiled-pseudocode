/*
 * XREFs of ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140006DF0
 * Callers:
 *     ?GetDevicePipeFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1400056E0 (-GetDevicePipeFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400103E0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x140011350 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     memcpy_0 @ 0x140019B52 (memcpy_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetDevicePipeFormat(CAudioDeviceGraph *this, struct tWAVEFORMATEX **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v5; // rbx
  CProcessNode *v6; // rbx
  __int64 (__fastcall *v7)(CProcessNode *__hidden, struct IAudioMediaType **); // rdi
  int LeftFormat; // eax
  int v9; // edi
  unsigned __int16 *v10; // rbp
  __int64 v11; // rdi
  struct tWAVEFORMATEX *v12; // rax
  struct tWAVEFORMATEX *v13; // rbx
  ULONG (__stdcall *Release)(IAudioMediaType *); // rsi
  struct IAudioMediaType *v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
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
        LeftFormat = CProcessNode::GetLeftFormat(v6, &v16);
      else
        LeftFormat = v7(v6, &v16);
      v9 = LeftFormat;
      if ( LeftFormat >= 0 )
      {
        v10 = (unsigned __int16 *)((__int64 (__fastcall *)(struct IAudioMediaType *))v16->lpVtbl->GetAudioFormat)(v16);
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
  if ( v9 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      73LL,
      &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids,
      (unsigned int)v9);
  }
  if ( v16 )
  {
    Release = v16->lpVtbl->Release;
    if ( (char *)Release == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v16);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))Release)(v16);
  }
  return (unsigned int)v9;
}
