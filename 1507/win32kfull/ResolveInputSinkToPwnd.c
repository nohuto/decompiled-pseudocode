/*
 * XREFs of ResolveInputSinkToPwnd @ 0x1C0007858
 * Callers:
 *     ResolveDCompInputHandleToPwnd @ 0x1C000776C (ResolveDCompInputHandleToPwnd.c)
 *     NtUserSetManipulationInputTarget @ 0x1C0220200 (NtUserSetManipulationInputTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResolveInputSinkToPwnd(void *a1, int a2, _DWORD *a3)
{
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  __int64 v9; // rdx
  int IsImplicit; // eax
  CompositionObject *v11; // rcx
  struct CompositionInputObject *v13; // [rsp+40h] [rbp+20h] BYREF
  __int64 v14; // [rsp+48h] [rbp+28h] BYREF

  *a3 = 0;
  v14 = 0LL;
  if ( (int)CompositionInputObject::ResolveHandle(a1, 1u, 1, &v13) >= 0 )
  {
    if ( !a2 )
    {
      gbCompositionInputSinkLuidFromPoint = 1;
      gluidCompositionInputSinkLuidFromPoint = *((_QWORD *)v13 + 2);
      goto LABEL_9;
    }
    v5 = a2 - 1;
    if ( !v5 )
      goto LABEL_7;
    v6 = v5 - 1;
    if ( v6 )
    {
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
        CompositionInputObject::GetWindowForInputType(v13, v9, &v14);
LABEL_9:
        IsImplicit = CompositionInputObject::IsImplicit(v13);
        v11 = v13;
        *a3 = IsImplicit;
        CompositionObject::Release(v11);
        return v14;
      }
      if ( v8 != 1 )
        goto LABEL_9;
    }
    v9 = 3LL;
    goto LABEL_8;
  }
  return v14;
}
