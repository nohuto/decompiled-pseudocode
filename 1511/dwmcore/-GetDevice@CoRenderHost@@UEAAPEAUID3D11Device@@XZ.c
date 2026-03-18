/*
 * XREFs of ?GetDevice@CoRenderHost@@UEAAPEAUID3D11Device@@XZ @ 0x1800BC990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ID3D11Device *__fastcall CoRenderHost::GetDevice(CoRenderHost *this)
{
  return (struct ID3D11Device *)*((_QWORD *)this + 5);
}
