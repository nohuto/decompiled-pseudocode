/*
 * XREFs of ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C000C43C
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C000C4E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C000C720 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 * Callees:
 *     AllocateObject @ 0x1C004C110 (AllocateObject.c)
 */

struct BRUSH *__fastcall BRUSHMEMOBJ::pbrAllocBrush(BRUSHMEMOBJ *this, int a2)
{
  struct BRUSH *result; // rax

  *((_DWORD *)this + 12) = 0;
  result = (struct BRUSH *)AllocateObject(a2 != 0 ? 200LL : 152LL);
  if ( result )
  {
    *((_QWORD *)result + 12) = 0LL;
    *((_DWORD *)result + 22) = 0;
    *((_DWORD *)result + 26) = 0;
    *((_DWORD *)result + 27) = -1;
    *((_QWORD *)result + 7) = (char *)result + 80;
    *((_DWORD *)result + 13) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
  }
  return result;
}
