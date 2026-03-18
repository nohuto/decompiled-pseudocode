/*
 * XREFs of ?GetEffectiveInputSink@CInteraction@@UEBAXKPEAPEAXPEAI@Z @ 0x1800A7920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::GetEffectiveInputSink(CInteraction *this, int a2, void **a3, unsigned int *a4)
{
  int v4; // edx
  unsigned int v5; // eax
  int v6; // edx
  int v7; // edx

  *a3 = (void *)*((_QWORD *)this + 6);
  v4 = a2 - 2;
  if ( !v4 )
    goto LABEL_2;
  v6 = v4 - 1;
  if ( !v6 )
  {
    v5 = *((_DWORD *)this + 17);
    goto LABEL_3;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v5 = *((_DWORD *)this + 14);
    goto LABEL_3;
  }
  if ( v7 == 1 )
  {
LABEL_2:
    v5 = *((_DWORD *)this + 16);
LABEL_3:
    *a4 = v5;
    return;
  }
  *a4 = 0;
}
