/*
 * XREFs of ?PrepareSequenceForIteration@Animation@Animations@Components@@AEAAXI@Z @ 0x1800865D0
 * Callers:
 *     ?ApiSeek@Animation@Animations@Components@@QEAAJM@Z @ 0x180019114 (-ApiSeek@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x1800862B4 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180086378 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x1800869E0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Components::Animations::Animation::PrepareSequenceForIteration(
        Components::Animations::Animation *this,
        int a2)
{
  int v2; // r8d
  float v4; // xmm1_4
  unsigned __int8 v5; // dl
  char v6; // dl
  __int64 v7; // rax
  bool v8; // zf

  v2 = *((_DWORD *)this + 10);
  v4 = FLOAT_1_0;
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      v6 = 0;
      goto LABEL_4;
    }
    v8 = (a2 & 1) == 0;
    v5 = *((_BYTE *)this + 104);
    if ( !v8 )
    {
      v6 = v5 >> 7 == 0;
      goto LABEL_4;
    }
  }
  else
  {
    v5 = *((_BYTE *)this + 104);
  }
  v6 = v5 >> 7;
LABEL_4:
  if ( *((int *)this + 12) >= 0 && a2 == *((_DWORD *)this + 12) && *((float *)this + 14) != 1.0 )
    v4 = *((float *)this + 14);
  v7 = *((_QWORD *)this + 2);
  *(_BYTE *)(v7 + 264) &= ~8u;
  *(_BYTE *)(v7 + 264) |= 8 * (v6 & 1);
  *(_DWORD *)(*((_QWORD *)this + 2) + 256LL) = 0;
  *(float *)(*((_QWORD *)this + 2) + 260LL) = v4;
}
