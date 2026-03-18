/*
 * XREFs of ?ProcessTrigger@CAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONTRIGGER_TRIGGER@@@Z @ 0x18001D8A0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800ABB48 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 */

__int64 __fastcall CAnimationTrigger::ProcessTrigger(
        CAnimationTrigger *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATIONTRIGGER_TRIGGER *a3)
{
  __int64 v3; // rsi
  int v4; // edi
  __int64 v6; // rbp
  _QWORD *v8; // rcx
  int v9; // eax

  v3 = *((_QWORD *)a3 + 1);
  v4 = 0;
  if ( !v3 )
    v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
  v6 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= *((_DWORD *)this + 16) )
    {
LABEL_5:
      *((_QWORD *)this + 9) = v3;
      return (unsigned int)v4;
    }
    v8 = *(_QWORD **)(*((_QWORD *)this + 5) + 8 * v6);
    if ( v8[13] )
    {
      v8[15] = v3;
      v8[24] = v3;
      v9 = CBaseAnimation::RegisterAnimateResource(*(CBaseAnimation **)(*((_QWORD *)this + 5) + 8 * v6));
      v4 = v9;
      if ( v9 < 0 )
        break;
    }
    v6 = (unsigned int)(v6 + 1);
    if ( v4 < 0 )
      goto LABEL_5;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x21u);
  return (unsigned int)v4;
}
