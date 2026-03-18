/*
 * XREFs of ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C0125DBC
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C008BD90 (DxgkQueryAdapterInfo.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ADAPTER_RENDER::CopyDListFileName(ADAPTER_RENDER *this, unsigned __int16 *a2)
{
  __int64 CurrentProcess; // rax
  size_t v5; // rdx
  const wchar_t *v6; // r8
  unsigned __int16 v7; // ax

  CurrentProcess = PsGetCurrentProcess();
  if ( PsGetProcessWow64Process(CurrentProcess) )
  {
    v6 = (const wchar_t *)*((_QWORD *)this + 38);
    v7 = *((_WORD *)this + 148);
  }
  else
  {
    v6 = (const wchar_t *)*((_QWORD *)this + 36);
    v7 = *((_WORD *)this + 140);
  }
  if ( a2 )
    *a2 = 0;
  return RtlStringCbCopyNW(a2, v5, v6, v7);
}
