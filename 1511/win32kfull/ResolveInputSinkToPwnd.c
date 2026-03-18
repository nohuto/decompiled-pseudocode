/*
 * XREFs of ResolveInputSinkToPwnd @ 0x1C0008E18
 * Callers:
 *     ResolveDCompInputHandleToPwnd @ 0x1C0008CE0 (ResolveDCompInputHandleToPwnd.c)
 *     NtUserSetManipulationInputTarget @ 0x1C0220020 (NtUserSetManipulationInputTarget.c)
 * Callees:
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01D9250 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall ResolveInputSinkToPwnd(void *a1, int a2, _DWORD *a3)
{
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  __int64 v9; // rdx
  int IsImplicit; // eax
  CompositionInputObject *v11; // rcx
  int v13; // ebx
  __int64 *v14; // [rsp+20h] [rbp-10h] BYREF
  CompositionInputObject *v15; // [rsp+50h] [rbp+20h] BYREF
  __int64 v16; // [rsp+58h] [rbp+28h] BYREF

  *a3 = 0;
  v16 = 0LL;
  if ( (int)CompositionInputObject::ResolveHandle(a1, 1u, 1, &v15) >= 0 )
  {
    if ( a2 )
    {
      v5 = a2 - 1;
      if ( !v5 )
        goto LABEL_7;
      v6 = v5 - 1;
      if ( !v6 )
        goto LABEL_12;
      v7 = v6 - 1;
      if ( !v7 )
      {
        v9 = 4LL;
        goto LABEL_8;
      }
      v8 = v7 - 1;
      if ( !v8 )
      {
LABEL_7:
        v9 = 1LL;
LABEL_8:
        CompositionInputObject::GetWindowForInputType(v15, v9, &v16);
LABEL_9:
        IsImplicit = CompositionInputObject::IsImplicit(v15);
        v11 = v15;
        *a3 = IsImplicit;
        CompositionObject::Release(v11);
        return v16;
      }
      v13 = v8 - 1;
      if ( !v13 )
      {
LABEL_12:
        v9 = 3LL;
        goto LABEL_8;
      }
      if ( v13 != 1 )
        goto LABEL_9;
      v14 = 0LL;
      CompositionInputObject::GetWindowForInputType(v15, 5LL, &v14);
      if ( v14 )
        ghwndCompositionInputSinkLuidFromPoint = *v14;
      else
        ghwndCompositionInputSinkLuidFromPoint = 0LL;
    }
    gluidCompositionInputSinkLuidFromPoint = *((_QWORD *)v15 + 2);
    CompositionInputObject::QueryTransform(v15, (struct tagINPUT_TRANSFORM *)&gxformCompositionInputSinkLuidFromPoint);
    gbCompositionInputSinkLuidFromPoint = 1;
    goto LABEL_9;
  }
  return v16;
}
