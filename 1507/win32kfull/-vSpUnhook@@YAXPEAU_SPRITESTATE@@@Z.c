/*
 * XREFs of ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FE990
 * Callers:
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C00FE8E8 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02711A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpUnhook(struct _SPRITESTATE *a1)
{
  _QWORD *v1; // rdx

  v1 = *(_QWORD **)a1;
  *((_DWORD *)a1 + 28) = *((_DWORD *)a1 + 26);
  *((_DWORD *)a1 + 27) = *((_DWORD *)a1 + 25);
  v1[356] = *((_QWORD *)a1 + 152);
  v1[354] = *((_QWORD *)a1 + 153);
  v1[355] = *((_QWORD *)a1 + 154);
  v1[358] = *((_QWORD *)a1 + 156);
  v1[359] = *((_QWORD *)a1 + 157);
  v1[360] = *((_QWORD *)a1 + 158);
  v1[363] = *((_QWORD *)a1 + 159);
  v1[371] = *((_QWORD *)a1 + 160);
  v1[414] = *((_QWORD *)a1 + 161);
  v1[411] = *((_QWORD *)a1 + 162);
  v1[410] = *((_QWORD *)a1 + 163);
  v1[408] = *((_QWORD *)a1 + 164);
  v1[409] = *((_QWORD *)a1 + 166);
  v1[380] = *((_QWORD *)a1 + 165);
  v1[430] = *((_QWORD *)a1 + 167);
  *((_DWORD *)a1 + 2) = 0;
}
