/*
 * XREFs of ?EvaluateEvents@Animation@Animations@Components@@AEAAXW4Dwm__AnimationEventTriggerType@23@PEAX@Z @ 0x180154D88
 * Callers:
 *     ?Calculate@Animation@Animations@Components@@QEAAXXZ @ 0x1801548BC (-Calculate@Animation@Animations@Components@@QEAAXXZ.c)
 *     ?OnAnimationComplete@Animation@Animations@Components@@AEAAXXZ @ 0x180155044 (-OnAnimationComplete@Animation@Animations@Components@@AEAAXXZ.c)
 *     ?OnAnimationLoopStart@Animation@Animations@Components@@AEAAXH@Z @ 0x18015509C (-OnAnimationLoopStart@Animation@Animations@Components@@AEAAXH@Z.c)
 *     ?OnAnimationProgress@Animation@Animations@Components@@AEAAXHMHPEAVValue@23@@Z @ 0x180155138 (-OnAnimationProgress@Animation@Animations@Components@@AEAAXHMHPEAVValue@23@@Z.c)
 *     ?OnAnimationReset@Animation@Animations@Components@@AEAAXHM@Z @ 0x18015518C (-OnAnimationReset@Animation@Animations@Components@@AEAAXHM@Z.c)
 *     ?OnAnimationStart@Animation@Animations@Components@@AEAAXXZ @ 0x180155248 (-OnAnimationStart@Animation@Animations@Components@@AEAAXXZ.c)
 * Callees:
 *     ?EvaluateCondition@ValueTrigger@Animations@Components@@QEAA_NPEAVValue@23@@Z @ 0x18015844C (-EvaluateCondition@ValueTrigger@Animations@Components@@QEAA_NPEAVValue@23@@Z.c)
 */

char __fastcall Components::Animations::Animation::EvaluateEvents(
        __int64 a1,
        int a2,
        struct Components::Animations::Value *a3)
{
  _UNKNOWN **v3; // rax
  int v4; // r15d
  __int64 v6; // r12
  int i; // edi
  __int64 v10; // rbx
  __int64 v11; // rcx
  char v12; // dl
  char v13; // r8
  char v14; // dl
  char v15; // dl
  char v16; // r8
  char v17; // dl
  _UNKNOWN **v18; // rdx
  int v19; // ecx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v3 = &retaddr;
  v4 = *(_DWORD *)(a1 + 128);
  v6 = *(_QWORD *)(a1 + 120);
  for ( i = 0; i != v4; ++i )
  {
    LOBYTE(v3) = i;
    v10 = *(_QWORD *)(v6 + 8LL * i);
    v11 = *(_QWORD *)(v10 + 40);
    if ( *(_DWORD *)v11 != a2 )
      continue;
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v12 = *(_BYTE *)(v11 + 4);
        v13 = v12 & 1;
        if ( *(_DWORD *)a3 < *(_DWORD *)(v11 + 8) )
          goto LABEL_12;
LABEL_10:
        if ( !v13 )
        {
          v14 = v12 | 1;
          goto LABEL_14;
        }
LABEL_15:
        LOBYTE(v3) = *(_BYTE *)(v11 + 4) & 1;
        if ( (_BYTE)v3 == v13 )
          continue;
        goto LABEL_28;
      }
      if ( a2 == 2 )
      {
        v12 = *(_BYTE *)(v11 + 4);
        v13 = v12 & 1;
        if ( *(float *)a3 >= *(float *)(v11 + 8) )
          goto LABEL_10;
LABEL_12:
        if ( (v12 & 3) == 3 )
        {
          v14 = v12 & 0xFE;
LABEL_14:
          *(_BYTE *)(v11 + 4) = v14;
        }
        goto LABEL_15;
      }
      if ( a2 != 3 )
        continue;
      LOBYTE(v3) = Components::Animations::ValueTrigger::EvaluateCondition(
                     (Components::Animations::ValueTrigger *)v11,
                     a3);
      goto LABEL_27;
    }
    v15 = *(_BYTE *)(v11 + 4);
    v16 = v15 & 1;
    if ( *(_DWORD *)a3 == *(_DWORD *)(v11 + 8) )
    {
      if ( v16 )
        goto LABEL_25;
      v17 = v15 | 1;
    }
    else
    {
      if ( (v15 & 3) != 3 )
        goto LABEL_25;
      v17 = v15 & 0xFE;
    }
    *(_BYTE *)(v11 + 4) = v17;
LABEL_25:
    if ( (*(_BYTE *)(v11 + 4) & 1) == v16 )
    {
      LOBYTE(v3) = 0;
LABEL_27:
      if ( !(_BYTE)v3 )
        continue;
    }
LABEL_28:
    v3 = *(_UNKNOWN ***)(v10 + 40);
    if ( (*((_BYTE *)v3 + 4) & 1) != 0 )
    {
      *(_BYTE *)(v10 + 68) &= ~2u;
      if ( (*((_BYTE *)v3 + 4) & 1) != 0 )
      {
        v3 = *(_UNKNOWN ***)(a1 + 200);
        v18 = (_UNKNOWN **)(v10 + 16);
        v19 = -1;
        while ( v3 )
        {
          ++v19;
          if ( v3 == v18 )
            goto LABEL_35;
          v3 = (_UNKNOWN **)*v3;
        }
        v19 = -1;
LABEL_35:
        if ( v19 < 0 )
        {
          v3 = *(_UNKNOWN ***)(a1 + 200);
          if ( v3 )
          {
            while ( *v3 )
              v3 = (_UNKNOWN **)*v3;
          }
          if ( v3 )
          {
            *(_QWORD *)(v10 + 24) = v3;
            *v3 = v18;
          }
          else
          {
            *(_QWORD *)(a1 + 200) = v18;
          }
        }
      }
    }
  }
  return (char)v3;
}
