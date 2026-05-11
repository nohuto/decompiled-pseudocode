/*
 * XREFs of PropertyAudioSignalProcessingBasicSupport @ 0x1C0018F20
 * Callers:
 *     <none>
 * Callees:
 *     PropertyAudioSignalProcessingPinValidation @ 0x1C0018E88 (PropertyAudioSignalProcessingPinValidation.c)
 */

__int64 __fastcall PropertyAudioSignalProcessingBasicSupport(IRP *a1, _DWORD *a2, __int64 a3)
{
  unsigned int Length; // esi
  __int64 result; // rax

  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  result = PropertyAudioSignalProcessingPinValidation(a1, a2);
  if ( (int)result >= 0 )
  {
    if ( (a2[5] & 0x200) != 0 )
    {
      if ( Length >= 4 )
      {
        *(_DWORD *)a3 = 513;
        a1->IoStatus.Information = 4LL;
        if ( Length >= 0x28 )
        {
          *(_DWORD *)(a3 + 4) = 40;
          *(_QWORD *)(a3 + 24) = 0LL;
          *(_QWORD *)(a3 + 32) = 0LL;
          *(GUID *)(a3 + 8) = GUID_NULL;
          a1->IoStatus.Information = 40LL;
        }
        return 0LL;
      }
      else
      {
        result = 3221225507LL;
        a1->IoStatus.Information = 40LL;
      }
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
