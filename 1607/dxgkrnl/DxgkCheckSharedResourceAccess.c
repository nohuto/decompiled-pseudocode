/*
 * XREFs of DxgkCheckSharedResourceAccess @ 0x1C0152D90
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006E88 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0009B60 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCheckSharedResourceAccess(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 *v13; // rsi
  __int64 *i; // rbx
  HANDLE v15; // rax
  _BYTE v17[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v18[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2059);
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v18);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  Global = DXGGLOBAL::GetGlobal(v4);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, *a1, 2);
  if ( ObjectA )
  {
    v12 = *(_QWORD *)(ObjectA + 144);
    if ( v12 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGFASTMUTEX *const)(v12 + 8));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
      v13 = (__int64 *)(v12 + 48);
      for ( i = *(__int64 **)(v12 + 48); ; i = (__int64 *)*i )
      {
        if ( i == v13 )
        {
          LODWORD(v12) = -1073741790;
          goto LABEL_15;
        }
        v15 = *((_BYTE *)i + 16) ? PsGetCurrentProcessId() : PsGetProcessId((PEPROCESS)i[3]);
        v8 = a1[1];
        if ( v15 == (HANDLE)v8 )
          break;
      }
      LODWORD(v12) = 0;
LABEL_15:
      if ( v17[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v11 + 24) = *a1;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v11);
  }
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v8, &EventProfilerExit, v9, 2059);
  return (unsigned int)v12;
}
