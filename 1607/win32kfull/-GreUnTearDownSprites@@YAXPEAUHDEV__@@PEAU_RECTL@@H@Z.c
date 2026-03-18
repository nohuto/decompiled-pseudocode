/*
 * XREFs of ?GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C026B0CC
 * Callers:
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C0265078 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 * Callees:
 *     vSpUnTearDownSprites @ 0x1C02790C0 (vSpUnTearDownSprites.c)
 */

void __fastcall GreUnTearDownSprites(_QWORD *a1, struct _RECTL *a2)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( *((_DWORD *)a1 + 41) )
  {
    do
    {
      vSpUnTearDownSprites(*(_QWORD *)(a1[21] + 8 * v2), a2, 0LL);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)a1 + 41) );
  }
  else
  {
    vSpUnTearDownSprites(a1, a2, 0LL);
  }
}
