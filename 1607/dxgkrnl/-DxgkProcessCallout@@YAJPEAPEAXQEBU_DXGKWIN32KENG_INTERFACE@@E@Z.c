/*
 * XREFs of ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C00CE560
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@@Z @ 0x1C00CE5F4 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall DxgkProcessCallout(
        struct DXGPROCESS **a1,
        const struct _DXGKWIN32KENG_INTERFACE *const a2,
        __int64 a3)
{
  char v3; // bl
  unsigned int v6; // ebx
  struct DXGPROCESS *v8; // rax
  _QWORD *v9; // rax
  struct DXGPROCESS *v10; // [rsp+48h] [rbp+20h] BYREF

  v3 = a3;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2000);
  if ( v3 == 1 )
  {
    if ( *(_WORD *)a2 == 392 && *((_WORD *)a2 + 1) == 5 )
    {
      v6 = 0;
      if ( (int)DXGPROCESS::CreateDxgProcess(&v10) >= 0 )
      {
        v8 = v10;
        *a1 = v10;
        *((_QWORD *)v8 + 9) = a2;
      }
    }
    else
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1);
      v9[3] = *((unsigned __int16 *)a2 + 1);
      v9[4] = *(unsigned __int16 *)a2;
      v9[5] = 5LL;
      v9[6] = 392LL;
      WdLogEvent5_WdAssertion(v9);
      v6 = -1073741811;
    }
  }
  else
  {
    v6 = 0;
    *a1 = 0LL;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerExit, a3, 2000);
  return v6;
}
