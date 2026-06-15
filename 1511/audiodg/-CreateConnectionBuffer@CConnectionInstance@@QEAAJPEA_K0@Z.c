/*
 * XREFs of ?CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z @ 0x140010C70
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14000DD10 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400103E0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x140010D70 (-GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CConnectionInstance::CreateConnectionBuffer(
        CConnectionInstance *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  CProcessNode *v5; // rbx
  __int64 (__fastcall *v7)(CProcessNode *__hidden, struct IAudioMediaType **); // rsi
  int RightFormat; // eax
  int v9; // ebx
  bool v10; // sf
  ULONG (__stdcall *Release)(IAudioMediaType *); // rsi
  __int64 v13; // rsi
  _BYTE v14[8]; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-28h]
  int v16; // [rsp+30h] [rbp-20h]
  struct IAudioMediaType *v17; // [rsp+38h] [rbp-18h] BYREF
  int v18; // [rsp+40h] [rbp-10h]
  unsigned __int64 v19; // [rsp+70h] [rbp+20h] BYREF

  v17 = 0LL;
  v15 = 0LL;
  v5 = (CProcessNode *)*((_QWORD *)this + 3);
  v16 = *((_DWORD *)this + 10);
  v18 = 1094927443;
  if ( v5 )
  {
    v7 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v5 + 16LL);
    if ( v7 == CProcessNode::GetRightFormat )
      RightFormat = CProcessNode::GetRightFormat(v5, &v17);
    else
      RightFormat = v7(v5, &v17);
    v9 = RightFormat;
    v10 = RightFormat < 0;
LABEL_5:
    if ( v10 )
      goto LABEL_8;
    goto LABEL_6;
  }
  v13 = *((_QWORD *)this + 4);
  if ( v13 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioMediaType **))(*(_QWORD *)v13 + 8LL))(
           *((_QWORD *)this + 4),
           &v17);
    v10 = v9 < 0;
    goto LABEL_5;
  }
LABEL_6:
  v9 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, unsigned __int64 *))(**((_QWORD **)this + 6) + 40LL))(
         *((_QWORD *)this + 6),
         v14,
         &v19);
  if ( v9 >= 0 )
  {
    *a2 = v19;
    *a3 = v15;
  }
LABEL_8:
  if ( v17 )
  {
    Release = v17->lpVtbl->Release;
    if ( (char *)Release == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v17);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))Release)(v17);
    v17 = 0LL;
  }
  if ( v9 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11LL,
      &WPP_5d27bd7bd7bfafaac91857425b42f44a_Traceguids,
      (unsigned int)v9);
  }
  return (unsigned int)v9;
}
