/*
 * XREFs of ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x1800A02FC
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001C168 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x1800A1A60 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18000A0E0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?RemoveAt@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180072FF0 (-RemoveAt@-$CAtlList@KV-$CElementTraits@K@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?AddHead@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEAAPEAU__POSITION@@K@Z @ 0x18009F024 (-AddHead@-$CAtlList@KV-$CElementTraits@K@ATL@@@ATL@@QEAAPEAU__POSITION@@K@Z.c)
 *     ?ValidateScreenReaderDuckingGain@@YAMM@Z @ 0x1800A061C (-ValidateScreenReaderDuckingGain@@YAMM@Z.c)
 */

__int64 __fastcall TsSessionIdScreenReaderStateChanged(DWORD a1, unsigned int a2, int a3, float a4, int *a5)
{
  float v5; // xmm7_4
  int v9; // edi
  unsigned int v10; // esi
  int *v11; // r14
  int v12; // eax
  __int64 v13; // r8
  struct TSSession *v14; // rbx
  float v15; // xmm6_4
  __int64 *v16; // rcx
  __int64 *i; // rdx
  __int64 result; // rax
  ATL::CAtlException *v19; // rbx
  struct TSSession *v20[2]; // [rsp+28h] [rbp-50h] BYREF
  ATL::CAtlException *v21; // [rsp+38h] [rbp-40h] BYREF

  v20[1] = (struct TSSession *)-2LL;
  v5 = a4;
  v9 = 0;
  v10 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v11 = a5;
  *a5 = 0;
  v12 = TsSessionFromSessionId(a1, 1, 0LL, v20);
  if ( v12 )
  {
    if ( v12 > 0 )
      v10 = (unsigned __int16)v12 | 0x80070000;
    else
      v10 = v12;
    goto LABEL_23;
  }
  v14 = v20[0];
  v15 = *((float *)v20[0] + 56);
  v16 = (__int64 *)((char *)v20[0] + 176);
  for ( i = (__int64 *)*((_QWORD *)v20[0] + 22); i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a2 )
      goto LABEL_10;
  }
  i = 0LL;
LABEL_10:
  if ( !a3 )
  {
    if ( i )
      ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(v16, i);
    if ( !*((_QWORD *)v14 + 24) )
      *((_DWORD *)v14 + 56) = 1065353216;
    goto LABEL_20;
  }
  if ( !i )
  {
    try
    {
      ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::AddHead(v16, a2, v13);
    }
    catch ( ATL::CAtlException *v21 )
    {
      v19 = v21;
      if ( *(_DWORD *)v21 == -1073741571 )
        _resetstkoflw();
      v10 = *(_DWORD *)v19;
      v9 = 0;
      if ( *(int *)v19 >= 0 )
      {
        v11 = a5;
        v5 = a4;
        v14 = v20[0];
        goto LABEL_15;
      }
LABEL_23:
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
      result = v10;
    }
  }
LABEL_15:
  *((float *)v14 + 56) = ValidateScreenReaderDuckingGain(v5);
LABEL_20:
  if ( v15 != *((float *)v14 + 56) )
    v9 = 1;
  *v11 = v9;
  goto LABEL_23;
}
