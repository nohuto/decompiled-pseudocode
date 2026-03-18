/*
 * XREFs of ?RegisterVisualGroup@CVisual@@QEAAJPEAVCVisualGroup@@@Z @ 0x1801047DC
 * Callers:
 *     ?RegisterNNotifiersInternal@CVisualGroup@@AEAAJPEAPEAVCVisual@@I@Z @ 0x180107140 (-RegisterNNotifiersInternal@CVisualGroup@@AEAAJPEAPEAVCVisual@@I@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::RegisterVisualGroup(CVisual *this, struct CVisualGroup *a2)
{
  unsigned int v2; // edi
  struct CVisualGroup **v3; // r8
  unsigned int i; // eax
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // ebx
  int v8; // eax
  struct CVisualGroup *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = 0;
  v3 = (struct CVisualGroup **)*((_QWORD *)this + 95);
  for ( i = 0; i < *((_DWORD *)this + 196); ++v3 )
  {
    if ( a2 == *v3 )
      break;
    ++i;
  }
  if ( i >= *((_DWORD *)this + 196) )
  {
    v5 = *((_DWORD *)this + 196);
    v6 = v5 + 1;
    if ( v5 + 1 < v5 )
    {
      v7 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v2 = -2147024362;
LABEL_12:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC85u);
      return v2;
    }
    if ( v6 > *((_DWORD *)this + 195) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 760, 8u, 1, &v10);
      v7 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
      v2 = v7;
      if ( v7 < 0 )
        goto LABEL_12;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 95) + 8LL * *((unsigned int *)this + 196)) = v10;
      *((_DWORD *)this + 196) = v6;
    }
  }
  return v2;
}
