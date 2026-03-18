/*
 * XREFs of ?VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C001F438
 * Callers:
 *     VidSchiSelectContext @ 0x1C0021C64 (VidSchiSelectContext.c)
 * Callees:
 *     <none>
 */

struct _VIDSCH_NODE *__fastcall VidSchiSelectReadyNode(struct _VIDSCH_GLOBAL *a1)
{
  struct _VIDSCH_NODE *result; // rax
  int v3; // r8d
  ULONGLONG v4; // rdx
  __int64 LeastSignificantBit; // rcx

  if ( *((_DWORD *)a1 + 14) == 1 )
  {
    result = (struct _VIDSCH_NODE *)*((_QWORD *)a1 + 47);
    if ( *((_DWORD *)result + 412) )
      return result;
  }
  else
  {
    v3 = *((_DWORD *)a1 + 222);
    v4 = *((_QWORD *)a1 + 44) & *((_QWORD *)a1 + 45);
    if ( !v4 )
      v4 = *((_QWORD *)a1 + 44);
    if ( v4 >> ((unsigned __int8)v3 + 1) )
      v4 = v4 >> ((unsigned __int8)v3 + 1) << ((unsigned __int8)v3 + 1);
    if ( v4 )
    {
      LeastSignificantBit = (unsigned int)RtlFindLeastSignificantBit(v4);
      result = (struct _VIDSCH_NODE *)*((_QWORD *)a1 + LeastSignificantBit + 47);
      *((_DWORD *)a1 + 222) = LeastSignificantBit;
      return result;
    }
  }
  return 0LL;
}
