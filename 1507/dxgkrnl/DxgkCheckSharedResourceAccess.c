/*
 * XREFs of DxgkCheckSharedResourceAccess @ 0x1C012E3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0004848 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCheckSharedResourceAccess(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 *v16; // rsi
  __int64 *i; // rbx
  HANDLE v18; // rax
  _BYTE v20[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v21[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2059);
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v21);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  Global = DXGGLOBAL::GetGlobal(v5, v4, v6, v7);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, *a1, 2);
  if ( ObjectA )
  {
    v15 = *(_QWORD *)(ObjectA + 136);
    if ( v15 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)(v15 + 8));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
      v16 = (__int64 *)(v15 + 48);
      for ( i = *(__int64 **)(v15 + 48); ; i = (__int64 *)*i )
      {
        if ( i == v16 )
        {
          LODWORD(v15) = -1073741790;
          goto LABEL_15;
        }
        v18 = *((_BYTE *)i + 16) ? PsGetCurrentProcessId() : PsGetProcessId((PEPROCESS)i[3]);
        v11 = a1[1];
        if ( v18 == (HANDLE)v11 )
          break;
      }
      LODWORD(v15) = 0;
LABEL_15:
      if ( v20[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    LODWORD(v15) = -1073741811;
    *(_QWORD *)(v14 + 24) = *a1;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v14);
  }
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v11, &EventProfilerExit, v12, 2059);
  return (unsigned int)v15;
}
