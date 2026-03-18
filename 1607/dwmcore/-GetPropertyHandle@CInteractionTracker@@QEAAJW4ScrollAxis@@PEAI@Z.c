/*
 * XREFs of ?GetPropertyHandle@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAI@Z @ 0x18014ABE4
 * Callers:
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x18015E0D8 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CInteractionTracker::GetPropertyHandle(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edx

  v3 = 0;
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        *a3 = 5;
      }
      else
      {
        v3 = -2147467259;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x556u);
      }
    }
    else
    {
      *a3 = 3;
    }
  }
  else
  {
    *a3 = 2;
  }
  return v3;
}
