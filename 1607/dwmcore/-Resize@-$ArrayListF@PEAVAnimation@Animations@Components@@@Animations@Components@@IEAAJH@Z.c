/*
 * XREFs of ?Resize@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x1800AD2D4
 * Callers:
 *     ?RemoveAt@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x18001D898 (-RemoveAt@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z.c)
 *     ?Add@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnimation@23@@Z @ 0x1800AD458 (-Add@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnima.c)
 * Callees:
 *     ?Free@Heap@Animations@Components@@UEAAXPEAX@Z @ 0x1800210A0 (-Free@Heap@Animations@Components@@UEAAXPEAX@Z.c)
 *     ?Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z @ 0x1800210D0 (-Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall Components::Animations::ArrayListF<Components::Animations::Animation *>::Resize(__int64 a1, int a2)
{
  _OWORD *v2; // rbp
  _OWORD *v5; // rcx
  bool v6; // r15
  int v7; // ebx
  _OWORD *v9; // rax
  _OWORD *v10; // r14

  v2 = (_OWORD *)(a1 + 16);
  v5 = *(_OWORD **)a1;
  v6 = v5 == v2;
  if ( v5 == v2 )
  {
    if ( a2 > 8 )
      goto LABEL_3;
LABEL_8:
    *(_DWORD *)(a1 + 8) = a2;
    return 0LL;
  }
  if ( a2 <= 8 )
  {
    memcpy_0(v2, v5, 8LL * a2);
    Components::Animations::Heap::Free(
      (Components::Animations::Heap *)&Components::Animations::g_defaultHeap,
      *(void **)a1);
    *(_DWORD *)(a1 + 12) = 8;
    *(_QWORD *)a1 = v2;
    goto LABEL_8;
  }
LABEL_3:
  v7 = *(_DWORD *)(a1 + 12);
  while ( a2 != v7 )
  {
    if ( a2 < v7 / 2 )
    {
      v7 /= 2;
    }
    else
    {
      if ( a2 <= v7 )
        break;
      v7 *= 2;
    }
  }
  if ( v7 == *(_DWORD *)(a1 + 12) )
    goto LABEL_8;
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
    }
    if ( v7 > *(_DWORD *)(a1 + 12) )
      memset_0((char *)v9 + 8 * *(int *)(a1 + 12), 0, 8LL * (v7 - *(_DWORD *)(a1 + 12)));
    *(_DWORD *)(a1 + 12) = v7;
    *(_QWORD *)a1 = v10;
    goto LABEL_8;
  }
  return 2147942414LL;
}
