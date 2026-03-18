/*
 * XREFs of ?Resize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x1800AF4A8
 * Callers:
 *     ?SetSize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z @ 0x1800AF69C (-SetSize@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     ?Free@Heap@Animations@Components@@UEAAXPEAX@Z @ 0x1800210A0 (-Free@Heap@Animations@Components@@UEAAXPEAX@Z.c)
 *     ?Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z @ 0x1800210D0 (-Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::Resize(
        __int64 a1,
        int a2)
{
  _OWORD *v2; // rbp
  _OWORD *v5; // rcx
  bool v6; // r15
  int v8; // ebx
  _OWORD *v9; // rax
  _OWORD *v10; // r14
  _OWORD *v11; // rax
  __int128 v12; // xmm0
  _OWORD *v13; // rbp

  v2 = (_OWORD *)(a1 + 16);
  v5 = *(_OWORD **)a1;
  v6 = v5 == v2;
  if ( v5 == v2 )
  {
    if ( a2 <= 8 )
    {
LABEL_3:
      *(_DWORD *)(a1 + 8) = a2;
      return 0LL;
    }
  }
  else if ( a2 <= 8 )
  {
    memcpy_0(v2, v5, 24LL * a2);
    Components::Animations::Heap::Free(
      (Components::Animations::Heap *)&Components::Animations::g_defaultHeap,
      *(void **)a1);
    *(_DWORD *)(a1 + 12) = 8;
    *(_QWORD *)a1 = v2;
    goto LABEL_3;
  }
  v8 = *(_DWORD *)(a1 + 12);
  while ( a2 != v8 )
  {
    if ( a2 < v8 / 2 )
    {
      v8 /= 2;
    }
    else
    {
      if ( a2 <= v8 )
        break;
      v8 *= 2;
    }
  }
  if ( v8 == *(_DWORD *)(a1 + 12) )
    goto LABEL_3;
  if ( v5 == v2 )
    v5 = 0LL;
  v9 = Components::Animations::Heap::Realloc((Components::Animations::Heap *)&Components::Animations::g_defaultHeap, v5);
  v10 = v9;
  if ( v9 )
  {
    if ( v6 )
    {
      *v9 = *v2;
      v9[1] = v2[1];
      v9[2] = v2[2];
      v9[3] = v2[3];
      v9[4] = v2[4];
      v9[5] = v2[5];
      v9[6] = v2[6];
      v11 = v9 + 8;
      v12 = v2[7];
      v13 = v2 + 8;
      *(v11 - 1) = v12;
      *v11 = *v13;
      v11[1] = v13[1];
      v11[2] = v13[2];
      v11[3] = v13[3];
    }
    if ( v8 > *(_DWORD *)(a1 + 12) )
      memset_0((char *)v10 + 24 * *(int *)(a1 + 12), 0, 24LL * (v8 - *(_DWORD *)(a1 + 12)));
    *(_DWORD *)(a1 + 12) = v8;
    *(_QWORD *)a1 = v10;
    goto LABEL_3;
  }
  return 2147942414LL;
}
