/*
 * XREFs of ?WriteInstruction@CDrawImageInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180018690
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDrawImageInstruction::WriteInstruction(
        CDrawImageInstruction *this,
        char *a2,
        const struct CVisual *a3)
{
  char *v6; // rdi
  float *v7; // rax
  char *v8; // rsi
  __int64 v9; // rcx
  int v11; // eax
  int v12; // ecx
  int v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0;
  (*(void (__fastcall **)(CDrawImageInstruction *, int *))(*(_QWORD *)this + 8LL))(this, &v13);
  *(_DWORD *)a2 = v13 + 4;
  v6 = a2 + 4;
  *(_DWORD *)v6 = 217;
  *((_DWORD *)v6 + 5) = *(_DWORD *)(*((_QWORD *)this + 4) + 24LL);
  if ( IsRectEmpty((const RECT *)this + 1) )
  {
    v11 = *((_DWORD *)a3 + 28);
    v12 = *((_DWORD *)a3 + 29);
    *((_DWORD *)v6 + 1) = 0;
    *((_DWORD *)v6 + 2) = 0;
    *((float *)v6 + 3) = (float)v11;
    *((float *)v6 + 4) = (float)v12;
  }
  else
  {
    v7 = (float *)(v6 + 4);
    v8 = (char *)(this - (CDrawImageInstruction *)v6);
    v9 = 4LL;
    do
    {
      *v7 = (float)*(int *)((char *)v7 + (_QWORD)v8 + 12);
      ++v7;
      --v9;
    }
    while ( v9 );
  }
  return 0LL;
}
