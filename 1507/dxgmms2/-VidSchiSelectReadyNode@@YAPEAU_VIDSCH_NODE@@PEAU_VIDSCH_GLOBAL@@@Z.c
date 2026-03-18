/*
 * XREFs of ?VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C00047B0
 * Callers:
 *     VidSchiSelectContext @ 0x1C001A140 (VidSchiSelectContext.c)
 * Callees:
 *     <none>
 */

struct _VIDSCH_NODE *__fastcall VidSchiSelectReadyNode(struct _VIDSCH_GLOBAL *a1)
{
  int v2; // r8d
  ULONGLONG v3; // rdx
  __int64 LeastSignificantBit; // rcx
  struct _VIDSCH_NODE *result; // rax

  if ( *((_DWORD *)a1 + 14) != 1 )
  {
    v2 = *((_DWORD *)a1 + 220);
    v3 = *((_QWORD *)a1 + 43) & *((_QWORD *)a1 + 44);
    if ( !v3 )
      v3 = *((_QWORD *)a1 + 43);
    if ( v3 >> ((unsigned __int8)v2 + 1) )
      v3 = v3 >> ((unsigned __int8)v2 + 1) << ((unsigned __int8)v2 + 1);
    if ( v3 )
    {
      LeastSignificantBit = (unsigned int)RtlFindLeastSignificantBit(v3);
      result = (struct _VIDSCH_NODE *)*((_QWORD *)a1 + LeastSignificantBit + 46);
      *((_DWORD *)a1 + 220) = LeastSignificantBit;
      return result;
    }
    return 0LL;
  }
  result = (struct _VIDSCH_NODE *)*((_QWORD *)a1 + 46);
  if ( !*((_DWORD *)result + 404) )
    return 0LL;
  return result;
}
