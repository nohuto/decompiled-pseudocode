/*
 * XREFs of ?GetEffectiveInputSink@CInteraction@@UEBAXKPEAPEAXPEAI@Z @ 0x18010CEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::GetEffectiveInputSink(CInteraction *this, int a2, void **a3, unsigned int *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  unsigned int v7; // eax

  *a3 = (void *)*((_QWORD *)this + 6);
  v4 = a2 - 2;
  if ( !v4 )
  {
LABEL_8:
    v7 = *((_DWORD *)this + 16);
    goto LABEL_9;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        *a4 = 0;
        return;
      }
      goto LABEL_8;
    }
    v7 = *((_DWORD *)this + 14);
  }
  else
  {
    v7 = *((_DWORD *)this + 17);
  }
LABEL_9:
  *a4 = v7;
}
