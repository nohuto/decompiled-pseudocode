/*
 * XREFs of NtCompositionSetDropTarget @ 0x1C0002FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00032D4 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00763A0 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtCompositionSetDropTarget(void *a1, __int128 *a2, _QWORD *a3)
{
  int v4; // edi
  PVOID v5; // rbx
  _OWORD v7[3]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v8; // [rsp+50h] [rbp-48h]
  __int128 v9; // [rsp+60h] [rbp-38h]
  __int128 v10; // [rsp+70h] [rbp-28h]
  PVOID Object; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v12; // [rsp+B0h] [rbp+18h]
  __int64 v13; // [rsp+B8h] [rbp+20h]

  v12 = a3;
  v4 = 0;
  if ( a2 )
  {
    if ( a2 + 3 < a2 || (unsigned __int64)(a2 + 3) > MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v8 = *a2;
    v9 = a2[1];
    v10 = a2[2];
    v7[0] = v8;
    v7[1] = v9;
    v7[2] = v10;
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v4 >= 0 )
  {
    v4 = CompositionInputObject::ResolveHandle(a1, 2u, 1, (struct CompositionInputObject **)&Object);
    if ( v4 >= 0 )
    {
      v5 = Object;
      v13 = *((_QWORD *)Object + 2);
      v4 = CompositionInputObject::SetDropTarget(Object, (const struct COMPOSITION_INPUT_QUEUE *)v7);
      ObfDereferenceObject(v5);
      if ( v4 >= 0 )
      {
        if ( a3 )
        {
          if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a3 = v13;
        }
      }
    }
  }
  return (unsigned int)v4;
}
