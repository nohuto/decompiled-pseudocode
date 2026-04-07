/*
 * XREFs of ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x1800156B4
 * Callers:
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x18001BF30 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x18004823C (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTimelineBase::UpdateBeforeTickWorker(CTimelineBase *this, struct WindowsAnimation *a2)
{
  _QWORD *v2; // r15
  __int64 v3; // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // edi
  int v10; // ecx
  int v11; // ecx
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+90h] [rbp+8h] BYREF

  v16 = 0LL;
  v2 = (_QWORD *)((char *)this + 64);
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *v2 = 0LL;
  }
  if ( *((double *)this + 3) < 0.01 )
  {
    CTimelineBase::JumpToFinalValue(this);
    v9 = 0;
    goto LABEL_12;
  }
  if ( !*(_QWORD *)a2 )
  {
    v9 = -2147221008;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147221008, 0xA3u);
    goto LABEL_12;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, struct WindowsAnimation *, _QWORD *))(**(_QWORD **)a2 + 24LL))(
         *(_QWORD *)a2,
         a2,
         v2);
  v9 = v6;
  if ( v6 < 0 )
  {
    v15 = 165;
    goto LABEL_38;
  }
  v10 = *((_DWORD *)this + 14);
  if ( !v10 )
  {
LABEL_15:
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)a2 + 1) + 48LL))(
           *((_QWORD *)a2 + 1),
           v7,
           v8,
           &v16);
    v9 = v6;
    if ( v6 >= 0 )
      goto LABEL_10;
    v15 = 180;
    goto LABEL_38;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v13 = v11 - 1;
    if ( !v13 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 112LL))(*((_QWORD *)a2 + 1));
      v9 = v6;
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
        v9 = v6;
        if ( v6 >= 0 )
          goto LABEL_10;
        v15 = 204;
      }
      else
      {
        v15 = 203;
      }
      goto LABEL_38;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 96LL))(*((_QWORD *)a2 + 1));
      v9 = v6;
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
        v9 = v6;
        if ( v6 >= 0 )
          goto LABEL_10;
        v15 = 216;
      }
      else
      {
        v15 = 215;
      }
      goto LABEL_38;
    }
    if ( v14 == 1 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)a2 + 1) + 32LL))(
             *((_QWORD *)a2 + 1),
             v7,
             &v16);
      v9 = v6;
      if ( v6 >= 0 )
        goto LABEL_10;
      v15 = 221;
      goto LABEL_38;
    }
    goto LABEL_15;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 96LL))(*((_QWORD *)a2 + 1));
  v9 = v6;
  if ( v6 < 0 )
  {
    v15 = 191;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
    v9 = v6;
    if ( v6 >= 0 )
    {
LABEL_10:
      if ( *((_QWORD *)a2 + 2)
        || (v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2, (char *)a2 + 16),
            v9 = v6,
            v6 >= 0) )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)a2 + 2) + 24LL))(
               *((_QWORD *)a2 + 2),
               *v2,
               v16);
        v9 = v6;
        if ( v6 >= 0 )
          goto LABEL_12;
        v15 = 229;
      }
      else
      {
        v15 = 227;
      }
      goto LABEL_38;
    }
    v15 = 192;
  }
LABEL_38:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, v15);
LABEL_12:
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return v9;
}
