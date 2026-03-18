/*
 * XREFs of ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x14028D51C
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x14023EB9C (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpUnhook(struct _SPRITESTATE *a1)
{
  _QWORD *v1; // rdx

  v1 = *(_QWORD **)a1;
  *((_DWORD *)a1 + 26) = *((_DWORD *)a1 + 24);
  *((_DWORD *)a1 + 25) = *((_DWORD *)a1 + 23);
  v1[351] = *((_QWORD *)a1 + 150);
  v1[349] = *((_QWORD *)a1 + 151);
  v1[350] = *((_QWORD *)a1 + 152);
  v1[353] = *((_QWORD *)a1 + 154);
  v1[354] = *((_QWORD *)a1 + 155);
  v1[355] = *((_QWORD *)a1 + 156);
  v1[358] = *((_QWORD *)a1 + 157);
  v1[366] = *((_QWORD *)a1 + 158);
  v1[409] = *((_QWORD *)a1 + 159);
  v1[406] = *((_QWORD *)a1 + 160);
  v1[405] = *((_QWORD *)a1 + 161);
  v1[403] = *((_QWORD *)a1 + 162);
  v1[404] = *((_QWORD *)a1 + 164);
  v1[375] = *((_QWORD *)a1 + 163);
  v1[425] = *((_QWORD *)a1 + 165);
  *((_DWORD *)a1 + 272) = 0;
}
