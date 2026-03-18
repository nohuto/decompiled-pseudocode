/*
 * XREFs of NtUpdateInputSinkTransforms @ 0x1C00030E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0003278 (-UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00763A0 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtUpdateInputSinkTransforms(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  __int64 i; // rdi
  ULONG64 v6; // rdx
  __int128 v7; // xmm3
  __int128 v8; // xmm4
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  void *v12[2]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v13; // [rsp+30h] [rbp-68h]
  __int128 v14; // [rsp+40h] [rbp-58h]
  __int128 v15; // [rsp+50h] [rbp-48h]
  __int64 v16; // [rsp+60h] [rbp-38h]
  PVOID Object; // [rsp+B8h] [rbp+20h] BYREF

  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    v4 = 0;
    for ( i = 0LL; v4 >= 0 && (unsigned int)i < a2; i = (unsigned int)(i + 1) )
    {
      v6 = a1 + 72 * i;
      if ( v6 + 72 < v6 || v6 + 72 > MmUserProbeAddress )
        v6 = MmUserProbeAddress;
      v7 = *(_OWORD *)(v6 + 16);
      v8 = *(_OWORD *)(v6 + 32);
      v9 = *(_OWORD *)(v6 + 48);
      v10 = *(_QWORD *)(v6 + 64);
      *(_OWORD *)v12 = *(_OWORD *)v6;
      v13 = v7;
      v14 = v8;
      v15 = v9;
      v16 = v10;
      v4 = CompositionInputObject::ResolveHandle(v12[0], 2u, 1, (struct CompositionInputObject **)&Object);
      if ( v4 >= 0 )
      {
        CompositionInputObject::UpdateTransform(
          (CompositionInputObject *)Object,
          (const struct tagINPUT_TRANSFORM *)&v12[1]);
        ObfDereferenceObject(Object);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v4;
}
