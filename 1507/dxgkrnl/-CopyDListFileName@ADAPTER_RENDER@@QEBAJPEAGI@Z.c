/*
 * XREFs of ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C0120274
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C00908E0 (DxgkQueryAdapterInfo.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ADAPTER_RENDER::CopyDListFileName(const wchar_t **this, unsigned __int16 *a2)
{
  __int64 CurrentProcess; // rax
  size_t v5; // rdx
  const wchar_t *v6; // r8
  unsigned __int16 v7; // ax

  CurrentProcess = PsGetCurrentProcess(this);
  if ( PsGetProcessWow64Process(CurrentProcess) )
  {
    v6 = this[35];
    v7 = *((_WORD *)this + 136);
  }
  else
  {
    v6 = this[33];
    v7 = *((_WORD *)this + 128);
  }
  if ( a2 )
    *a2 = 0;
  return RtlStringCbCopyNW(a2, v5, v6, v7);
}
