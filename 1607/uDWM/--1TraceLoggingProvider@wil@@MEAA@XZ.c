/*
 * XREFs of ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1800778B8
 * Callers:
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x18009CC10 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::TraceLoggingProvider::~TraceLoggingProvider(wil::TraceLoggingProvider *this)
{
  bool v1; // zf
  __int64 v2; // rbx

  v1 = *((_BYTE *)this + 16) == 0;
  *(_QWORD *)this = &wil::TraceLoggingProvider::`vftable';
  if ( !v1 )
  {
    v2 = *((_QWORD *)this + 1);
    EtwEventUnregister(*(_QWORD *)(v2 + 32));
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_DWORD *)v2 = 0;
  }
}
