/*
 * XREFs of ?GetStreamDescriptor@CVADServer@@IEAAJPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x18008AB58
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014990 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall CVADServer::GetStreamDescriptor(CVADServer *this, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR **a2)
{
  __int16 *v2; // rax
  unsigned int v3; // ebx
  unsigned __int16 v4; // r8
  unsigned int v5; // r8d
  int v6; // eax
  unsigned __int8 v7; // cf
  int v8; // eax
  int v9; // eax

  v2 = (__int16 *)*((_QWORD *)this + 25);
  v3 = 0;
  v4 = *v2;
  if ( *v2 == -2 )
  {
    v5 = *((_DWORD *)v2 + 6);
    if ( v5 <= 7 )
    {
      v6 = 202;
      v7 = _bittest(&v6, v5);
      goto LABEL_6;
    }
LABEL_7:
    v9 = 0;
    goto LABEL_8;
  }
  if ( v4 > 7u )
    goto LABEL_7;
  v8 = 202;
  v7 = _bittest(&v8, v4);
LABEL_6:
  v9 = 1;
  if ( !v7 )
    goto LABEL_7;
LABEL_8:
  if ( v9 || *((_DWORD *)this + 72) == 1 )
  {
    *a2 = (struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *)*((_QWORD *)this + 22);
  }
  else
  {
    *a2 = 0LL;
    v3 = -2147467263;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x52u,
        (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
        -2147467263);
    }
  }
  return v3;
}
