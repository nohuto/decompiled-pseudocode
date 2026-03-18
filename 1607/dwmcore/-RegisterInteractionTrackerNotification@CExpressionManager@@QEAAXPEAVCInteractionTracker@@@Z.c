/*
 * XREFs of ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x180137864
 * Callers:
 *     ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x1801498F8 (--0CInteractionTracker@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A3774 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CExpressionManager::RegisterInteractionTrackerNotification(
        CExpressionManager *this,
        struct CInteractionTracker *a2)
{
  char *v2; // r8
  unsigned int v3; // ecx
  struct CInteractionTracker **v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // eax
  struct CInteractionTracker *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = (char *)this + 280;
  v3 = 0;
  v4 = *(struct CInteractionTracker ***)v2;
  if ( *((_DWORD *)v2 + 6) )
  {
    while ( a2 != *v4 )
    {
      ++v3;
      ++v4;
      if ( v3 >= *((_DWORD *)v2 + 6) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v5 = *((_DWORD *)v2 + 6);
    v6 = v5 + 1;
    if ( v5 + 1 < v5 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else if ( v6 > *((_DWORD *)v2 + 5) )
    {
      v7 = DynArrayImpl<1>::AddMultipleAndSet((__int64)v2, 8u, (__int64)v2, &v8);
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v2 + 8LL * v5) = v8;
      *((_DWORD *)v2 + 6) = v6;
    }
  }
}
