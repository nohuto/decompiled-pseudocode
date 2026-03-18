/*
 * XREFs of ?CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C00101B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0033080 (memmove.c)
 */

void __fastcall FxIoContext::CopyParameters(FxIoContext *this, FxRequestBase *Request)
{
  int m_MajorFunction; // ecx
  void *m_BufferToFree; // rdx
  _IRP *m_Irp; // r8
  void *UserBuffer; // rcx
  int v8; // ecx
  int v9; // ecx

  m_MajorFunction = this->m_MajorFunction;
  if ( m_MajorFunction != 14 )
  {
    v8 = m_MajorFunction - 3;
    if ( !v8 || (v9 = v8 - 1) == 0 )
    {
      this->m_CompletionParams.Parameters.Write.Length = this->m_CompletionParams.IoStatus.Information;
      goto LABEL_3;
    }
    if ( v9 != 11 )
      goto LABEL_3;
  }
  this->m_CompletionParams.Parameters.Ioctl.Output.Length = this->m_CompletionParams.IoStatus.Information;
LABEL_3:
  m_BufferToFree = this->m_BufferToFree;
  if ( m_BufferToFree && this->m_CopyBackToBuffer )
  {
    m_Irp = Request->m_Irp.m_Irp;
    UserBuffer = m_Irp->UserBuffer;
    if ( UserBuffer )
    {
      memmove(UserBuffer, m_BufferToFree, m_Irp->IoStatus.Information);
      this->m_CopyBackToBuffer = 0;
    }
  }
}
