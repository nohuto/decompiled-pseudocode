/*
 * XREFs of ?Resize@?$ArrayListF@UDeferredEventInfo@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x180156C34
 * Callers:
 *     ?RegisterDeferredEvent@AnimationManager@Animations@Components@@QEAAJPEAVAnimationEvent@23@@Z @ 0x180155F14 (-RegisterDeferredEvent@AnimationManager@Animations@Components@@QEAAJPEAVAnimationEvent@23@@Z.c)
 *     ?SetSize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z @ 0x180156EF4 (-SetSize@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?Free@Heap@Animations@Components@@UEAAXPEAX@Z @ 0x180155AE0 (-Free@Heap@Animations@Components@@UEAAXPEAX@Z.c)
 *     ?Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z @ 0x180155C30 (-Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall Components::Animations::ArrayListF<Components::Animations::DeferredEventInfo>::Resize(
        __int64 a1,
        int a2)
{
  _OWORD *v2; // rbp
  _OWORD *v5; // rcx
  bool v6; // r15
  int v7; // ebx
  _OWORD *v8; // rax
  _OWORD *v9; // r14
  _OWORD *v11; // rax
  __int128 v12; // xmm0
  _OWORD *v13; // rbp

  v2 = (_OWORD *)(a1 + 16);
  v5 = *(_OWORD **)a1;
  v6 = v5 == v2;
  if ( v5 == v2 )
  {
    if ( a2 <= 8 )
      goto LABEL_21;
  }
  else if ( a2 <= 8 )
  {
    memcpy_0(v2, v5, 24LL * a2);
    Components::Animations::Heap::Free(
      (Components::Animations::Heap *)&Components::Animations::g_defaultHeap,
      *(void **)a1);
    *(_DWORD *)(a1 + 12) = 8;
    *(_QWORD *)a1 = v2;
    goto LABEL_21;
  }
  v7 = *(_DWORD *)(a1 + 12);
  while ( a2 != v7 )
  {
    if ( a2 >= v7 / 2 )
    {
      if ( a2 <= v7 )
        break;
      v7 *= 2;
    }
    else
    {
      v7 /= 2;
    }
  }
  if ( v7 != *(_DWORD *)(a1 + 12) )
  {
    if ( v5 == v2 )
      v5 = 0LL;
    v8 = Components::Animations::Heap::Realloc(
           (Components::Animations::Heap *)&Components::Animations::g_defaultHeap,
           v5,
           24LL * v7);
    v9 = v8;
    if ( !v8 )
      return 2147942414LL;
    if ( v6 )
    {
      *v8 = *v2;
      v8[1] = v2[1];
      v8[2] = v2[2];
      v8[3] = v2[3];
      v8[4] = v2[4];
      v8[5] = v2[5];
      v8[6] = v2[6];
      v11 = v8 + 8;
      v12 = v2[7];
      v13 = v2 + 8;
      *(v11 - 1) = v12;
      *v11 = *v13;
      v11[1] = v13[1];
      v11[2] = v13[2];
      v11[3] = v13[3];
    }
    if ( v7 > *(_DWORD *)(a1 + 12) )
      memset_0((char *)v9 + 24 * *(int *)(a1 + 12), 0, 24LL * (v7 - *(_DWORD *)(a1 + 12)));
    *(_DWORD *)(a1 + 12) = v7;
    *(_QWORD *)a1 = v9;
  }
LABEL_21:
  *(_DWORD *)(a1 + 8) = a2;
  return 0LL;
}
