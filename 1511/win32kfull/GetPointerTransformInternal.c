/*
 * XREFs of GetPointerTransformInternal @ 0x1C01E1478
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x1C021B560 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?GetPointerDataQPCTimeList@@YAH_KIPEA_KPEAH@Z @ 0x1C01F83FC (-GetPointerDataQPCTimeList@@YAH_KIPEA_KPEAH@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F8E08 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C022805C (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z.c)
 */

__int64 __fastcall GetPointerTransformInternal(__int64 a1, unsigned __int16 a2, unsigned int a3, unsigned __int64 *a4)
{
  __int64 v4; // rbp
  unsigned __int64 ThreadPointerData; // rdi
  int v7; // ecx
  __int64 v9; // rax
  InputTransform *v10; // rsi
  unsigned __int64 *v11; // rbx
  unsigned int PointerDataQPCTimeList; // edi
  int v13; // ecx
  struct tagINPUT_TRANSFORM *v14; // [rsp+20h] [rbp-38h]
  char v15; // [rsp+28h] [rbp-30h]
  unsigned int v16[10]; // [rsp+30h] [rbp-28h] BYREF
  HWND v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = a3;
  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 960), a2, 0LL, 0LL, &v17);
  if ( !ThreadPointerData || (v9 = ValidateHwnd(v17), (v10 = (InputTransform *)v9) == 0LL) )
  {
    v7 = 87;
LABEL_3:
    UserSetLastError(v7);
    return 0LL;
  }
  if ( !*(_QWORD *)(v9 + 336) )
  {
    v7 = 232;
    goto LABEL_3;
  }
  if ( (_DWORD)v4 == 1 )
  {
    v11 = (unsigned __int64 *)v16;
  }
  else
  {
    v11 = (unsigned __int64 *)Win32AllocPoolZInit(8 * v4, 2020176725LL);
    if ( !v11 )
    {
      v7 = 8;
      goto LABEL_3;
    }
  }
  LODWORD(v17) = 1;
  PointerDataQPCTimeList = GetPointerDataQPCTimeList(ThreadPointerData, v4, v11, (int *)&v17);
  if ( !PointerDataQPCTimeList )
  {
    if ( !(_DWORD)v17 )
    {
      v13 = 232;
LABEL_16:
      UserSetLastError(v13);
      goto LABEL_17;
    }
LABEL_15:
    v13 = 87;
    goto LABEL_16;
  }
  PointerDataQPCTimeList = InputTransform::GetTransformList(
                             v10,
                             (struct tagWND *)(unsigned int)v4,
                             (unsigned int)v11,
                             a4,
                             v14,
                             v15);
  if ( !PointerDataQPCTimeList )
    goto LABEL_15;
LABEL_17:
  if ( v11 != (unsigned __int64 *)v16 )
    Win32FreePool(v11);
  return PointerDataQPCTimeList;
}
