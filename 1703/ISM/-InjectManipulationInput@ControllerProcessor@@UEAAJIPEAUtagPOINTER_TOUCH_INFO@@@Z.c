/*
 * XREFs of ?InjectManipulationInput@ControllerProcessor@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x180035A40
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::InjectManipulationInput(
        ControllerProcessor *this,
        unsigned int a2,
        struct tagPOINTER_TOUCH_INFO *a3)
{
  DWORD TickCount; // ebx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  int *v9; // rcx
  __int64 v10; // r8
  int *v11; // rdx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v18[236]; // [rsp+40h] [rbp-C0h] BYREF

  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  memset(v18, 0, sizeof(v18));
  v7 = *((_DWORD *)this + 290);
  v8 = *((_DWORD *)this + 291);
  v18[2] = PerformanceCount.QuadPart;
  v18[0] = __PAIR64__(v7, v8);
  LODWORD(v18[1]) = TickCount;
  LODWORD(v18[5]) = 1888;
  if ( a2 )
  {
    v9 = (int *)&v18[7];
    v10 = a2;
    v11 = (int *)((char *)a3 + 32);
    do
    {
      *(v9 - 1) = *(v11 - 7);
      v9[2] = *v11;
      v9[3] = v11[1];
      v12 = 0;
      *v9 = 0;
      if ( (*(_BYTE *)(v11 - 5) & 2) != 0 )
      {
        v12 = 1;
        *v9 = 1;
      }
      if ( (*(v11 - 5) & 0x30000) != 0 )
        *v9 = v12 | 2;
      ++LODWORD(v18[6]);
      v11 += 36;
      v9 += 12;
      --v10;
    }
    while ( v10 );
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this - 4) + 24LL))(*((_QWORD *)this - 4), v18);
  v15 = v13;
  if ( v13 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v14, &MinInput_Warning_CheckResult, 12, 2613, v13);
  return v15;
}
