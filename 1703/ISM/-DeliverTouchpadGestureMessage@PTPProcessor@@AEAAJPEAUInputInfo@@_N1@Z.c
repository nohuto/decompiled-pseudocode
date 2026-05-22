/*
 * XREFs of ?DeliverTouchpadGestureMessage@PTPProcessor@@AEAAJPEAUInputInfo@@_N1@Z @ 0x18005C0D0
 * Callers:
 *     ?OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005B680 (-OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcesssDragStart@PTPProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18005BA68 (-ProcesssDragStart@PTPProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessDragContinue@PTPProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18005BB94 (-ProcessDragContinue@PTPProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005DBB0 (-OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall PTPProcessor::DeliverTouchpadGestureMessage(
        PTPProcessor *this,
        struct InputInfo *a2,
        char a3,
        char a4)
{
  unsigned int v4; // r15d
  __int64 i; // rdx
  __int64 v8; // rcx
  __int64 j; // r12
  int v10; // edi
  int v11; // ebx
  int v12; // edx
  int v13; // r8d
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx

  v4 = 0;
  *(_DWORD *)a2 = 32;
  *((_DWORD *)a2 + 157) = *((_DWORD *)this + 153);
  if ( a3 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 12); *((_DWORD *)a2 + 4 * v8 + 14) &= 0xFFFFFFFC )
    {
      v8 = 3 * i;
      i = (unsigned int)(i + 1);
    }
  }
  if ( a4 )
  {
    *((_DWORD *)this + 159) = *((_DWORD *)a2 + 16);
    *((_DWORD *)this + 160) = *((_DWORD *)a2 + 17);
  }
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)a2 + 12); j = (unsigned int)(j + 1) )
  {
    v10 = *((_DWORD *)a2 + 12 * j + 17) - *((_DWORD *)this + 160);
    v11 = MulDiv(
            *((_DWORD *)a2 + 12 * j + 16) - *((_DWORD *)this + 159),
            *((_DWORD *)this + 52),
            100 * *((_DWORD *)this + 54));
    v12 = *((_DWORD *)this + 57) + MulDiv(v10, *((_DWORD *)this + 53), 100 * *((_DWORD *)this + 55));
    v13 = v11 + *((_DWORD *)this + 56);
    if ( v13 >= 0 )
    {
      v14 = *((_DWORD *)this + 52);
      if ( v13 < v14 )
        *((_DWORD *)a2 + 12 * j + 16) = v13;
      else
        *((_DWORD *)a2 + 12 * j + 16) = v14 - 1;
    }
    else
    {
      *((_DWORD *)a2 + 12 * j + 16) = 0;
    }
    if ( v12 >= 0 )
    {
      v15 = *((_DWORD *)this + 53);
      if ( v12 < v15 )
        *((_DWORD *)a2 + 12 * j + 17) = v12;
      else
        *((_DWORD *)a2 + 12 * j + 17) = v15 - 1;
    }
    else
    {
      *((_DWORD *)a2 + 12 * j + 17) = 0;
    }
  }
  if ( *((_DWORD *)this + 151) != 4 )
  {
    v16 = PointerProcessor::OnInputReport((PTPProcessor *)((char *)this + 8), a2);
    v4 = v16;
    if ( v16 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v17, &MinInput_Warning_CheckResult, 11, 733, v16);
  }
  return v4;
}
