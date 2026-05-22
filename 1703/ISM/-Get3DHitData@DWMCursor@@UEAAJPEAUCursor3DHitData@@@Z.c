/*
 * XREFs of ?Get3DHitData@DWMCursor@@UEAAJPEAUCursor3DHitData@@@Z @ 0x18001FCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::Get3DHitData(DWMCursor *this, struct Cursor3DHitData *a2)
{
  char *v2; // rdx

  *(_OWORD *)a2 = *((_OWORD *)this + 11);
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 12);
  *((_OWORD *)a2 + 2) = *((_OWORD *)this + 13);
  *((_OWORD *)a2 + 3) = *((_OWORD *)this + 14);
  *((_OWORD *)a2 + 4) = *((_OWORD *)this + 15);
  *((_OWORD *)a2 + 5) = *((_OWORD *)this + 16);
  *((_OWORD *)a2 + 6) = *((_OWORD *)this + 17);
  v2 = (char *)a2 + 128;
  *((_OWORD *)v2 - 1) = *((_OWORD *)this + 18);
  *(_OWORD *)v2 = *((_OWORD *)this + 19);
  *((_OWORD *)v2 + 1) = *((_OWORD *)this + 20);
  *((_QWORD *)v2 + 4) = *((_QWORD *)this + 42);
  return 0LL;
}
